using comelang;

int puts(const char* str);
int printf(const char *format, ...);

typedef unsigned long size_t;

void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);

size_t strlen(const char *s);

void *memset(void *s, int c, size_t n);
char *strncpy(char *dest, const char *src, size_t n);

void exit(int status);

#define NULL ((void*)0)

static void xassert(char* msg, bool test)
{
    printf("%s...", msg);
    if(!test) {
        puts("false");
        exit(2);
    }
    puts("ok");
}

static void ncfree(void* mem)
{
    if(mem) {
        free(mem);
    }
}

static void* come_calloc(size_t count, size_t size)
{
    char* mem = calloc(1, sizeof(int)+sizeof(long)+count*size);
    
    int* ref_count = (int*)mem;
    
    //(*ref_count)++;
    
    long* size2 = (long*)(mem + sizeof(int));
    
    *size2 = size*count + sizeof(long) + sizeof(int);
    
    return mem + sizeof(int) + sizeof(long);
}

static void* come_increment_ref_count(void* mem)
{
    if(mem == NULL) {
        return mem;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    (*ref_count)++;
    
    return mem;
}

static void* come_decrement_ref_count(void* mem, bool no_decrement, bool no_free)
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
        ncfree(ref_count);
        return NULL;
    }
    
    return mem;
}

static void come_free_object(void* mem)
{
    if(mem == NULL) {
        return;
    }
    
    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
    
    ncfree(ref_count);
}

static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free)
{
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
        int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));
        
        if(!no_decrement) {
            (*ref_count)--;
        }
        
        int count = *ref_count;
        if(!no_free && count <= 0) {
            if(mem) {
                if(fun) {
                    void (*finalizer)(void*) = fun;
                    finalizer(mem);
                }
                come_free_object(mem);
            }
        }
    }
}

static void* nccalloc(size_t nmemb, size_t size)
{
    void* result = calloc(nmemb, size);
    return result;
}

static void* come_memdup(void* block)
{
    if(!block) {
        return null;
    }
    char* mem = (char*)block - sizeof(int) - sizeof(long);
    
    long* size_p = (long*)(mem + sizeof(int));

    size_t size = *size_p;

    void* ret = calloc(1, size);

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

void int::times(int self, void* parent, void (*block)(void* parent))
{
    for(int i = 0; i < self; i++) {
        block(parent);
    }
}

struct list_item<T>
{
    T item;
    list_item<T>* prev;
    list_item<T>* next;
};

struct list<T>
{
    list_item<T>* head;
    list_item<T>* tail;
    int len;

    list_item<T>* it;
};

impl list <T>
{
    list<T>*% initialize(list<T>*% self) {
        self.head = null;
        self.tail = null;
        self.len = 0;

        return self;
    }
    void finalize(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            if(isheap(T)) {
                delete borrow it.item;
            }
            var prev_it = it;
            it = it.next;
            delete borrow prev_it;
        }
    }
    void push_back(list<T>* self, T item)
    {
        if(self.len == 0) {
            list_item<T>* litem = borrow new list_item<T>;
            
            litem.prev = null;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head = litem;
        }
        else if(self.len == 1) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = null;
            litem.item = item;
            
            self.tail = litem;
            self.head.next = litem;
        }
        else {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = self.tail;
            litem.next = null;
            litem.item = item;
            
            self.tail.next = litem;
            self.tail = litem;
        }

        self.len++;
    }
    
    T& begin(list<T>* self) {
        self.it = self.head;

        if(self.it) {
            return self.it.item;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    T& next(list<T>* self) {
        self.it = self.it.next;

        if(self.it) {
            return self.it.item;
        }
        
        T& result;
        memset(&result, 0, sizeof(T));
        return result;
    }

    bool end(list<T>* self) {
        return self.it == null;
    }
    void each(list<T>* self, void* parent, void (*block)(void*, T&,int,bool*)) 
    {
        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            bool end_flag = false;
            block(parent, it.item, i, &end_flag);

            if(end_flag == true) {
                break;
            }
            it = it.next;
            i++;
        }
    }
    T& item(list<T>* self, int position, T& default_value) 
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        var i = 0;
        while(it != null) {
            if(position == i) {
                return it.item;
            }
            it = it.next;
            i++;
        };

        return default_value;
    }
}

#define foreach(o1, o2) for(var o1 = (o2).begin(); !(o2).end(); o1 = (o2).next())

typedef char*% string;

string __builtin_string(char* str)
{
    int len = strlen(str) + 1;
    
    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}
