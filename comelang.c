#include "comelang.h"

void come_gc_init()
{
}

void come_gc_final()
{
}

void* igc_calloc(size_t count, size_t size)
{
    using unsafe;
    
    char* mem = calloc(1, sizeof(int)+count*size);
    
    int* ref_count = (int*)mem;
    
    (*ref_count)++;
    
//printf("igc_calloc %p size %ld count %ld\n", mem + sizeof(int),size, count);
    return mem + sizeof(int);
}

void igc_increment_ref_count(void* mem)
{
//printf("igc_increment_ref_count %p\n", mem);
    using unsafe;
    
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    (*ref_count)++;
    
//printf("ref_count %d\n", *ref_count);
}


void igc_decrement_ref_count(void* mem)
{
//printf("igc_decrement_ref_count %p\n", mem);
    using unsafe;
    
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    (*ref_count)--;
//printf("ref_count %d\n", *ref_count);
    
    int count = *ref_count;
    if(count == 0) {
        ncfree(ref_count);
    }
}

void free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int));
    
    ncfree(ref_count);
}

void call_finalizer(void* fun, void* mem, int call_finalizer_only)
{
//printf("call_finalizer mem %p %d\n", mem, call_finalizer_only);
    if(mem == NULL) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        using unsafe;
        
        int* ref_count = (int*)((char*)mem - sizeof(int));
//printf("ref_count %d\n", *ref_count);
        
        (*ref_count)--;
        
        int count = *ref_count;
        if(count == 0) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                free_object(mem);
            }
        }
    }
}

void ncfree(void* mem)
{
//printf("ncfree %p\n", mem);
    if(mem) {
        free(mem);
    }
}

void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
//printf("nccalloc %p %d\n", result, size);
    return result;
}

void* gc_nccalloc(size_t nmemb, size_t size)
{
    void* result = GC_malloc(nmemb * size);
//printf("GC_malloc %p %d\n", result, size);
    return result;
}

void*%? ncmemdup(void*% block)
{
//puts("ncmemdup1");
    managed block;

    if(!block) {
        return dummy_heap null;
    }
//puts("ncmemdup2");
    char* mem = (char*)block - sizeof(int);

//puts("ncmemdup3");
//printf("malloc size mem %p\n", mem);
#ifdef __DARWIN_ARM__
    size_t size = malloc_size(mem);
#else
    size_t size = malloc_usable_size(mem);
#endif

//puts("ncmemdup4");
    void* ret = calloc(1, size);

//printf("memdup mem %p calloc %p\n", mem, ret);

    int* ref_count = ret;
    
    using unsafe;

    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    (*ref_count) = 1;
    
//printf("ncmemdup ret %p\n", (char*)ret + sizeof(int));

    return dummy_heap (char*)ret + sizeof(int);
}

void* call_cloner(void* fun, void* mem)
{
    if(fun && mem) {
//printf("call_cloner mem %p\n", mem);
        void* (*cloner)(void*) = fun;
        return cloner(mem);
    }
    
    return null;
}
string string(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

void* gc_ncmemdup(void* block)
{
    using unsafe;
    
    if(!block) {
        return null;
    }
    if(!GC_is_heap_ptr(block)) {
        return block;
    }
    
    size_t size = GC_size(block);

    void* ret = GC_malloc(size);

    if (ret) {
        char* p = ret;
        char* p2 = block;
        while(p - ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

    return ret;
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

buffer* buffer*::append(buffer* self, char* mem, size_t size)
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
    
    return self;
}

buffer* buffer*::append_char(buffer* self, char c)
{
    if(self.len + 1 + 1 + 1 >= self.size) {
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        self.size = new_size;
    }

    self.buf[self.len] = c;
    self.len++;

    self.buf[self.len] = '\0';
    
    return self;
}

buffer* buffer*::append_str(buffer* self, char* str)
{
    return self.append(str, strlen(str));
}

buffer* buffer*::append_nullterminated_str(buffer* self, char* str)
{
    self.append(str, strlen(str));
    self.append_char('\0');
    
    return self;
}

string buffer*::to_string(buffer* self)
{
    return (string(self.buf));
}

buffer* buffer*::append_int(buffer* self, int value) 
{
    return self.append((char*)&value, sizeof(int));
}

buffer* buffer*::append_long(buffer* self, long value) 
{
    return self.append((char*)&value, sizeof(long));
}

buffer* buffer*::append_short(buffer* self, short value) 
{
    return self.append((char*)&value, sizeof(short));
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

void unwrap_exception(char* sname, int sline, char* mem)
{
    if(mem == null) {
        fprintf(stderr, "%s %d: unwrap exception. The value is null\n", sname, sline);
        exit(2);
    }
}
