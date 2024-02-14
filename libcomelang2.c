#include "common.h"
#include <libgen.h>

#define HEAP_POOL_PAGE_SIZE 4048*2

struct sMemHeader
{
    size_t size;
    int freed;
    char* sname;
    int sline;
    struct sMemHeader* next;
    struct sMemHeader* alloc_next;
};

struct sHeapPool
{
    char** mem_pages;
    
    int size_pages;
    int num_pages;
    char* top;
    
    struct sMemHeader* free_mem;
    struct sMemHeader* malloced_free_mem;
    struct sMemHeader* alloc_mem;
};

struct sHeapPool gHeapPool;

void come_heap_init()
{
    memset(&gHeapPool, 0, sizeof(struct sHeapPool));
    
    const int size_pages = 4;
    
    gHeapPool.size_pages = size_pages;
    gHeapPool.mem_pages = calloc(1, sizeof(void*)*size_pages);
    
    for(int i=0; i<size_pages; i++) {
        gHeapPool.mem_pages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
    }
    
    gHeapPool.top = gHeapPool.mem_pages[0];
}

void come_heap_final(int check_mem_leak)
{
    if(check_mem_leak) {
        sMemHeader* it = gHeapPool.alloc_mem;
        while(it) {
            sMemHeader* next_it = it.alloc_next;
            
            if(!it->freed) {
                printf("%s %d: detecting memory leak\n", it->sname, it->sline);
            }
            
            it = next_it;
        }
    }
    
    for(int i=0; i<gHeapPool.size_pages; i++) {
        free(gHeapPool.mem_pages[i]);
    }
    free(gHeapPool.mem_pages);
    
    sMemHeader* it = gHeapPool.malloced_free_mem;
    while(it) {
        sMemHeader* next_it = it.next;
        free(it);
        it = next_it;
    }
}

static void* come_alloc_mem_from_heap_pool(size_t size, char* sname=null, int sline=0)
{
    void* result = null;
    
    if(size + sizeof(sMemHeader) >= HEAP_POOL_PAGE_SIZE) {
        struct sMemHeader* it = gHeapPool.malloced_free_mem;
        struct sMemHeader* prev_it = it;
        
        while(it) {
            if(size <= it.size) {
                result = (char*)it + sizeof(sMemHeader);
                
                if(it == gHeapPool.malloced_free_mem) {
                    gHeapPool.malloced_free_mem = it.next;
                }
                else {
                    prev_it.next = it.next;
                }
                
                memset(result, 0, size);
                
                it.freed = false;
                it.next = null;
                it.sname = sname;
                it.sline = sline;
                
                return result;
            }
            
            prev_it = it;
            it = it.next;
        }
        
        sMemHeader* header = calloc(1, size+sizeof(sMemHeader));
        
        result = (char*)header + sizeof(sMemHeader);
        
        header.size = size;
        header.freed = false;
        header.sname = sname;
        header.sline = sline;
        
        header.alloc_next = gHeapPool.alloc_mem;
        gHeapPool.alloc_mem = header;
        
        return result;
    }
    
    struct sMemHeader* it = gHeapPool.free_mem;
    struct sMemHeader* prev_it = it;
    
    while(it) {
        if(size <= it.size) {
            result = (char*)it + sizeof(sMemHeader);
            
            if(it == gHeapPool.free_mem) {
                gHeapPool.free_mem = it.next;
            }
            else {
                prev_it.next = it.next;
            }
            
            memset(result, 0, size);
            
            it.freed = false;
            it.next = null;
            it.sname = sname;
            it.sline = sline;
            
            return result;
        }
        
        prev_it = it;
        it = it.next;
    }
    
    if(gHeapPool.top + size + sizeof(sMemHeader) - gHeapPool.mem_pages[gHeapPool.num_pages] >= HEAP_POOL_PAGE_SIZE) {
        gHeapPool.num_pages++;
        
        if(gHeapPool.num_pages == gHeapPool.size_pages) {
            int new_size_pages = gHeapPool.size_pages * 2;
            
            char** new_mem_pages = calloc(1, sizeof(char*)*new_size_pages);
            
            for(int i=0; i< gHeapPool.size_pages; i++) {
                new_mem_pages[i] = gHeapPool.mem_pages[i];
            }
            
            for(int i=gHeapPool.size_pages; i<new_size_pages; i++) {
                new_mem_pages[i] = calloc(1, sizeof(char)*HEAP_POOL_PAGE_SIZE);
            }
            
            free(gHeapPool.mem_pages);
            
            gHeapPool.mem_pages = new_mem_pages;
            gHeapPool.size_pages = new_size_pages;
        }
        
        gHeapPool.top = gHeapPool.mem_pages[gHeapPool.num_pages];
    }
    
    sMemHeader* header = (sMemHeader*)gHeapPool.top;
    
    result = gHeapPool.top + sizeof(sMemHeader);
    
    header.size = size;
    header.freed = false;
    header.sname = sname;
    header.sline = sline;
    header.next = null;
    
    header.alloc_next = gHeapPool.alloc_mem;
    gHeapPool.alloc_mem = header;
    
    gHeapPool.top += size + sizeof(sMemHeader);
    
    memset(result, 0, size);
    
    return result;
}

static void come_free_mem_of_heap_pool(char* mem)
{
    sMemHeader* header = mem - sizeof(sMemHeader);
    size_t size = header.size;
    int freed = header.freed;
    
    if(size + sizeof(sMemHeader) >= HEAP_POOL_PAGE_SIZE) {
        /// prevent from double free ///
        if(freed) {
            return ;
        }
        
        /// go ///
        header.next = gHeapPool.malloced_free_mem;
        gHeapPool.malloced_free_mem = header;
        
        header.freed = true;
    }
    else {
        if(freed) {
            return;
        }
        
        /// go ///
        header.next = gHeapPool.free_mem;
        gHeapPool.free_mem = header;
        
        header.freed = true;
    }
}

void* come_calloc(size_t count, size_t size, char* sname=null, int sline=0)
{
    char* mem = come_alloc_mem_from_heap_pool(sizeof(int)+sizeof(long)+count*size, sname, sline);
    
    int* ref_count = (int*)mem;
    
    //(*ref_count)++;
    
    long* size2 = (long*)(mem + sizeof(int));
    
    *size2 = size*count + sizeof(long) + sizeof(int);
    
    return mem + sizeof(int) + sizeof(long);
}

void come_free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    come_free_mem_of_heap_pool(ref_count);
}

void* come_memdup(void* block, char* sname=null, int sline=0)
{
    if(!block) {
        return null;
    }
    char* mem = (char*)block - sizeof(int) - sizeof(long);
    
    long* size_p = (long*)(mem + sizeof(int));

    size_t size = *size_p;

    char* ret = come_alloc_mem_from_heap_pool(size);

    int* ref_count = ret;
    
    if (ret) {
        char* p = ret;
        char* p2 = mem;
        while(p - (char*)ret < size) {
            *p = *p2;
            p++;
            p2++;
        }
    }

//    (*ref_count) = 1;
    
    long* size_p2 = (long*)((char*)ret + sizeof(int));
    *size_p2 = size;
    
    return (char*)ret + sizeof(int) + sizeof(long);
}

void* come_null_check(void* mem, char* sname, int sline)
{
    if(mem == null) {
        printf("%s %d: null check error\n", sname, sline);
        exit(2);
    }
}

void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)++;
    
    return mem;
}

void* come_print_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    printf("ref_count %d\n", *ref_count);
    
    return mem;
}

void* come_decrement_ref_count(void* mem, void* protocol_fun, void* protocol_obj, bool no_decrement, bool no_free)
{
    if(mem == NULL) {
        return NULL;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    if(!no_decrement) {
        (*ref_count)--;
    }
    
    int count = *ref_count;
    if(!no_free && count <= 0) {
        if(protocol_obj && protocol_fun) {
            void (*finalizer)(void*) = protocol_fun;
            finalizer(protocol_obj);
            
            come_free_object(protocol_obj);
        }
        come_free_object(mem);
        return NULL;
    }
    
    return mem;
}

void come_call_finalizer(void* fun, void* mem, void* protocol_fun, void* protocol_obj, int call_finalizer_only, int no_decrement, int no_free)
{
    if(mem == NULL) {
        return;
    }
    
    if(call_finalizer_only) {
        if(fun) {
            if(protocol_obj && protocol_fun) {
                void (*finalizer)(void*) = protocol_fun;
                finalizer(protocol_obj);
            }
            void (*finalizer)(void*) = fun;
            finalizer(mem);
        }
    }
    else {
        int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        int count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(protocol_obj && protocol_fun) {
                    void (*finalizer)(void*) = protocol_fun;
                    finalizer(protocol_obj);
                    come_free_object(protocol_obj);
                }
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

void int::times(int self, void* parent, void (*block)(void* parent))
{
    for(int i = 0; i < self; i++) {
        block(parent);
    }
}

string __builtin_string(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

bool int::equals(int self, int right) 
{
    return self == right;
}

bool bool::equals(bool self, bool right) 
{
    return self == right;
}


bool char::equals(char self, char right) 
{
    return self == right;
}

bool short::equals(short self, short right) 
{
    return self == right;
}

bool long::equals(long self, long right) 
{
    return self == right;
}

bool string::equals(char* self, char* right) 
{
    return strcmp(self, right) == 0;
}

bool string::operator_equals(char* self, char* right) 
{
    return strcmp(self, right) == 0;
}

bool char*::operator_equals(char* self, char* right) 
{
    return strcmp(self, right) == 0;
}

bool string::operator_not_equals(char* self, char* right) 
{
    return strcmp(self, right) != 0;
}

bool char*::operator_not_equals(char* self, char* right) 
{
    return strcmp(self, right) != 0;
}

bool char*::equals(char* self, char* right) 
{
    return strcmp(self, right) == 0;
}

string char*::operator_add(char* self, char* right) 
{
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

string string::operator_add(char* self, char* right) 
{
    int len = strlen(self) + strlen(right);
   
    char*% result = new char[len+1];
    
    strncpy(result, self, len+1);
    strncat(result, right, len+1);
    
    return result;
}

unsigned int bool::get_hash_key(bool value)
{
    return (((int)value).get_hash_key());
}

unsigned int int::get_hash_key(int value)
{
    return value;
}

unsigned int short::get_hash_key(short int value)
{
    return value;
}

unsigned int long::get_hash_key(long value)
{
    return value;
}

unsigned int char::get_hash_key(char value)
{
    return value;
}

unsigned int string::get_hash_key(char* value)
{
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

unsigned int char*::get_hash_key(char* value)
{
    int result = 0;
    char* p = value;
    while(*p) {
        result += (*p);
        p++;
    }
    return result;
}

char char::clone(char self)
{
    return self;
}

int int::clone(int self)
{
    return self;
}

string char*::clone(char* self)
{
    if(self == null) { return null; }
    return string(self);
}

string string::clone(char* self)
{
    if(self == null) { return null; }
    
    return string(self);
}

long long int long::clone(long self)
{
    return self;
}

short int short::clone(short self)
{
    return self;
}

double double::clone(double self)
{
    return self;
}

float float::clone(float self)
{
    return self;
}

void buffer*::finalize(buffer* self)
{
    if(self && self.buf) delete borrow self.buf;
}

buffer*% buffer*::initialize(buffer*% self) 
{
    self.size = 128;
    self.buf = new char[self.size];
    self.buf[0] = '\0';
    self.len = 0;

    return self;
}

buffer*% buffer*::clone(buffer* self)
{
    if(self == null) {
        return null;
    }
    
    var result = new buffer;
    
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
        char*% old_buf = clone self.buf;
        int old_len = self.len;
        
        int new_size = (self.size + 10 + 1) * 2;
        self.buf = new char[new_size];
        memcpy(self.buf, old_buf, old_len);
        self.buf[old_len] = '\0';
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
    return string(self.buf);
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
    var result = new buffer.initialize();

    result.append_str(self);

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
        printf("vasprintf can't get heap memory.(msg %s)\n", msg);
        exit(2);
    }
    
    string result2 = string(result);
    
    free(result);
    
    return result2;
}

void FILE*::fclose(FILE* f) 
{
    fclose(f);
}

string FILE*::read(FILE* f)
{
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    (void)fprintf(f, "%s", msg2);
    
    return f;
}

string string::write(char* self, char* file_name, bool append=false) 
{
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    f.fprintf("%s", self);
    
    f.fclose()
    
    return string(self);
}

string char*::write(char* self, char* file_name, bool append=false) 
{
    FILE* f;
    if(append) {
       f = fopen(file_name, "a");
    }
    else {
       f = fopen(file_name, "w");
    }
    
    f.fprintf("%s", self);
    
    f.fclose()
    
    return string(self);
}

int string::length(char* str)
{
    return strlen(str);
}

int char*::length(char* str) {
    return strlen(str);
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

string char*::reverse(char* str) 
{
    int len = strlen(str);
    char*% result = new char[len + 1];

    for(int i=0; i<len; i++) {
        result[i] = str[len-i-1];
    }

    result[len] = '\0';

    return result;
}

string char*::substring(char* str, int head, int tail)
{
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

string string::substring(char* str, int head, int tail)
{
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

string xbasename(char* path)
{
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
    return string(dirname(string(path)));
}

string xnoextname(char* path)
{
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

bool xiswalpha(wchar_t c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xiswblank(wchar_t c)
{
    return c == ' ' || c == '\t';
}

bool xiswdigit(wchar_t c)
{
    return (c >= '0' && c <= '9');
}

bool xiswalnum(wchar_t c)
{
    return xiswalpha(c) || xiswdigit(c);
}

bool xisalpha(char c)
{
    bool result = (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
    return result;
}

bool xisblank(char c)
{
    return c == ' ' || c == '\t';
}

bool xisdigit(char c)
{
    return (c >= '0' && c <= '9');
}

bool xisalnum(char c)
{
    return xisalpha(c) || xisdigit(c);
}

bool xisascii(char c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

bool xiswascii(wchar_t c)
{
    bool result = (c >= ' ' && c <= '~');
    return result;
}

string string::read(char* file_name) 
{
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return string("");
    }
    
    string result = f.read();
    
    f.fclose()
    
    return result;
}

string char*::read(char* file_name) 
{
    FILE* f = fopen(file_name, "r");
    
    if(f == NULL) {
        return string("");
    }
    
    string result = f.read();
    
    f.fclose()
    
    return result;
}

void bool::catch(bool self, void* parent, void (*block)(void* parent))
{
    if(!self) {
        block(parent);
    }
}

void bool::expect(bool self, void* parent, void (*block)(void* parent)) 
{
    if(!self) {
        block(parent);
    }
}

string string::to_string(char* self)
{
    return string(self);
}

string char*::to_string(char* self)
{
    return string(self);
}

list<string>*% FILE*::readlines(FILE* f)
{
    list<string>*% result = new list<string>.initialize();
    
    while(1) {
        char buf[BUFSIZ];
        
        if(fgets(buf, BUFSIZ, f) == NULL) {
            break;
        }
        
        result.push_back(string(buf));
    }
    
    return result;
}

string FILE*::read(FILE* f)
{
    buffer*% buf = new buffer.initialize();
    
    while(1) {
        char buf2[BUFSIZ];
        
        int size = fread(buf2, 1, BUFSIZ, f);
        
        buf.append(buf2, size);

        if(size < BUFSIZ) {
            break;
        }
    }
    
    return buf.to_string();
}

FILE* FILE*::fprintf(FILE* f, const char* msg, ...)
{
    char msg2[1024];

    va_list args;
    va_start(args, msg);
    vsnprintf(msg2, 1024, msg, args);
    va_end(args);

    (void)fprintf(f, "%s", msg2);
    
    return f;
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

int int::compare(int left, int right) 
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

int string::compare(char* left, char* right) 
{
    return strcmp(left,right);
}

int char*::compare(char* left, char* right) 
{
    return strcmp(left,right);
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

void char*::puts(char* self)
{
    (void)puts(self);
}

void char*::print(char* self)
{
    printf("%s", self);
}

void fopen_block(const char* path, const char* mode, void* parent, void (*block)(void* parent, FILE* f))
{
    FILE* f = fopen(path, mode);
    
    if(f) {
        block(parent, f);
        
        fclose(f);
    }
}

int int::compare(int left, int right) 
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
