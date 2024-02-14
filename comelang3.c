#include "comelang.h"
#include <libgen.h>

regex_struct*% regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy)
{
    auto result = new regex_struct;

    const char* err;
    int erro_ofs;

    int options = PCRE_UTF8 | (ignore_case ? PCRE_CASELESS:0) | (multiline ? PCRE_MULTILINE : 0) | (extended ? PCRE_EXTENDED :0) | (dotall ? PCRE_DOTALL :0) | (dollar_endonly ? PCRE_DOLLAR_ENDONLY:0) | (ungreedy ? PCRE_UNGREEDY:0);

    result.str = string(str);

    result.ignore_case = ignore_case;
    result.multiline = multiline;
    result.global = global;
    result.extended = extended;
    result.dotall = dotall;
    result.anchored = anchored;
    result.dollar_endonly = dollar_endonly;
    result.ungreedy;
    result.options = options;

    result.re = pcre_compile(str, options, &err, &erro_ofs, NULL!);

    if(result.re == NULL) {
        fprintf(stderr, "regex error (%s)\n", str);
        exit(1);
    }

    return result;
}

void regex_struct*::finalize(regex_struct* reg)
{
    if(reg && reg.str) {
        delete borrow reg.str;
    }
    if(reg && reg.re) {
        free(reg.re);
    }
}

regex_struct*% regex_struct*::clone(regex_struct* reg)
{
    if(reg == null) {
        return null;
    }
    
    regex_struct*% result = new regex_struct;
    
    result.str = clone reg.str;

    result.ignore_case = reg.ignore_case;
    result.multiline = reg.multiline;
    result.global = reg.global;
    result.extended = reg.extended;
    result.dotall = reg.dotall;
    result.anchored = reg.anchored;
    result.dollar_endonly = reg.dollar_endonly;
    result.ungreedy = reg.ungreedy;

    result.options = reg.options;

    const char* err;
    int erro_ofs;

    result.re = pcre_compile(result.str, result.options, &err, &erro_ofs, NULL!);

    if(result.re == NULL) {
        fprintf(stderr, "regex compile error(%s)\n", result.str);
        exit(1);
    }

    return result;
}

void nregex::finalize(regex_struct* reg)
{
    regex_struct_finalize(reg);
}

nregex nregex::clone(regex_struct* reg)
{
    return regex_struct_clone(reg);
}

string string(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

string xsprintf(char* msg, ...)
{
    va_list args;
    va_start(args, msg);
    char* result;
    int len = vasprintf(&result, msg, args);
    va_end(args);

    if(len < 0) {
        fprintf(stderr, "vasprintf can't get heap memory.(msg %s)\n", msg);
        exit(2);
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

string string::reverse(char* str) 
{
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

string string::chomp(char* str)
{
    string result = string(str);
    
    if(result[result.length()-1] == '\n') {
        return result.substring(0, -2);
    }
    
    return result;
}

string string::substring(char* str, int head, int tail)
{
    using unsafe;
    
    if(str == null) {
        return string("");
    }

    int len = strlen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return str.substring(tail, head).reverse();
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return string("");
    }

    if(tail-head+1 < 1) {
        return string("");
    }

    string result = new char[tail-head+1];

    memcpy(result, str + head, tail-head);
    result[tail-head] = '\0';

    return result;
}

int string::length(char* str)
{
    return strlen(str);
}

unsigned int int::get_hash_key(int value)
{
    return value;
}

unsigned int string::get_hash_key(char* value)
{
    using unsafe;
    
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

bool string::equals(char* left, char* right)
{
    return strcmp(left, right) == 0;
}

int char::compare(char left, char right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int short::compare(short left, short right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int long::compare(long left, long right) 
{
    if(left < right) {
        return -1;
    }
    else if(left > right) {
        return 1;
    }
    else {
        return 0;
    }
    
    return 0;
}

int wchar_t*::compare(wchar_t* left, wchar_t* right) 
{
    return wcscmp(left,right);
}

buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    auto result = new buffer;
    
    result.size = self.size;
    result.buf = new char[self.size];
    result.len = self.len;
    memcpy(result.buf, self.buf, self.len);
    
    return result;
}

int buffer*::length(buffer* self) 
{
    return self.len;
}

void buffer*::reset(buffer* self)
{
    self.buf[0] = '\0';
    self.len = 0;
}

void buffer*::append(buffer* self, char* mem, size_t size)
{
    using unsafe;
    
    if(self.len + size + 1 + 1 >= self.size) {
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        int new_size = (self.size + size + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
        self.size = new_size;
    }

    memcpy(self.buf + self.len, mem, size);
    self.len += size;
    self.buf[self.len] = '\0';
}

void buffer*::append_char(buffer* self, char c)
{
    if(self.len + 1 + 1 + 1 >= self.size) {
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
}

void buffer*::append_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
}

void buffer*::append_nullterminated_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
    self.append_char('\0');
}

string buffer*::to_string(buffer* self)
{
    return (string(self.buf));
}

void buffer*::append_int(buffer* self, int value) 
{
    self.append((char*)&value, sizeof(int));
}

void buffer*::append_long(buffer* self, long value) 
{
    self.append((char*)&value, sizeof(long));
}

void buffer*::append_short(buffer* self, short value) 
{
    self.append((char*)&value, sizeof(short));
}

void buffer*::alignment(buffer* self) 
{
    int len = self.len;
    len = (len + 3) & ~3;
    
    if(len >= self.size) {
        int new_size = (self.size + 1 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    for(int i=self.len; i<len; i++) {
        self.buf[i] = '\0';
    }
    
    self.len = len;
}

int buffer*::compare(buffer* left, buffer* right) 
{
    return strcmp(left.buf, right.buf);
}

buffer*% string::to_buffer(char* self) 
{
    auto result = new buffer.initialize();

    result.append_str(self);

    return result;
}

int int::except(int self, void* parent, void (*block)(void* parent))
{
    if(self < 0) {
        block(parent);
    }

    return self;
}

bool bool::except(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }

    return self;
}

bool bool::if(bool self, void* parent, void (*block)(void* parent))
{
    if(self) {
        block(parent);
    }

    return self;
}

void int::times(int self, void* parent, void (*block)(void* parent))
{
    int i;
    for(i=0; i<self; i++) {
        block(parent);
    }
}


string xbasename(char* path)
{
    using unsafe;
    
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '/') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

string xdirname(char* path)
{
    using unsafe;
    
    return string(dirname(string(path)));
}

string xnoextname(char* path)
{
    using unsafe;
    
    string path2 = xbasename(path);
    
    char* p = path2 + strlen(path2);
    
    while(p >= path2) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path2) {
        return string(path2);
    }
    else {
        return path2.substring(0, p - path2);
    }
    
    return string("");
}

string xextname(char* path)
{
    using unsafe;
    
    char* p = path + strlen(path);
    
    while(p >= path) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p < path) {
        return string(path);
    }
    else {
        return string(p+1);  
    }
    
    return string("");
}

string xrealpath(char* path)
{
    char* result = realpath(path, null);

    string result2 = string(result);

    free(result);

    return result2;
}

string regex_struct*::to_string(regex_struct* regex)
{
    return string(regex.str);
}

unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

bool bool::equals(bool left, bool right)
{
    return left == right;
}


string string::lower_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'A' && str[i] <= 'Z') {
            result[i] = str[i] - 'A' + 'a';
        }
    }
    
    return result;
}

string string::upper_case(char* str)
{
    string result = string(str);
    for(int i=0; i<strlen(str); i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            result[i] = str[i] - 'a' + 'A';
        }
    }
    
    return result;
}

int char*::compare(char* left, char* right) 
{
    return strcmp(left, right);
}

void check_null_pointer(int sline, char* sname)
{
    fprintf(stderr, "%s %d: derefference for null pointer. abort\n", sname, sline);
    exit(2);
}


string char*::delete(char* str, int head, int tail) 
{
    using unsafe;
    
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return string(str);
    }
    
    if(head < 0) {
       head += len;
    }
    
    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return string(str);
    }

    if(tail >= len) {
        tail = len;
    }
    
    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return string(str);
}

wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    using unsafe;
    
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

wstring wstring(char* str)
{
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

int char*::index_count(char* str, char* search_str, int count, int default_value)
{
    int n = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        int len2 = strlen(search_str);
        int j;
        for(j=0; j<len2; j++) {
            if(str[i+j] != search_str[j]) {
                break;
            }
        }
        
        if(j == len2) {
            n++;
            
            if(n == count) {
                return i;
            }
        }
    }
    
    return default_value;
}

int char*::index_regex_count(char* self, regex_struct* reg, int count, int default_value)
{
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;
    
    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self);
        int regex_result = pcre_exec(re, (pcre_extra*)0!, self, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }
        
        /// match and no group strings ///
        if(regex_result > 0) {
            n++;

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
            
            if(n == count) {
                result = start[0];
                break;
            }
        }
        /// no match ///
        else {
            break;
        }
    }

    return result;
}

int char*::rindex(char* str, char* search_str, int default_value)
{
    using unsafe;
    
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

int char*::rindex_regex(char* self, regex_struct* reg, int default_value)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    string self2 = self.reverse();
    
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;
    
    int offset = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self2);
        int regex_result = pcre_exec(re, (pcre_extra*)0!, self2, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1 || regex_result > 0) 
        {
            result = strlen(self) -1 - start[0];
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

int char*::rindex_count(char* str, char* search_str, int count, int default_value)
{
    using unsafe;
    
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;
    
    int n = 0;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            n++;
            if(n == count) {
                return p - str;
            }
        }

        p--;
    }

    return default_value;
}


