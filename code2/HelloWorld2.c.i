# 0 "code2/HelloWorld2.c"
# 0 "<built-in>"
# 0 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 0 "<command-line>" 2
# 1 "./c.c.ach" 1
typedef long size_t;
typedef char*% string;
extern int gA;
extern struct list_int* gList;
extern int gB[3];

void __init_c_c__();
void __final_c_c__();
int puts(const char* str);
int printf(const char *format, ...);
void *malloc(size_t size);
void free(void *ptr);
void *calloc(size_t nmemb, size_t size);
void *realloc(void *ptr, size_t size);
size_t strlen(const char *s);
void *memset(void *s, int c, size_t n);
char *strncpy(char *dest, const char *src, size_t n);
char *strncat(char *dst, char *src, size_t sz);
int strcmp(const char *s1, const char *s2);
int strncmp(const char s1, const char s2, size_t n);
void exit(int status);
int main()
;
# 0 "<command-line>" 2
# 1 "./c.c.ach.ach" 1
typedef long size_t;
typedef char*% string;

void __init_code__HelloWorld__c__();
void __final_code__HelloWorld__c__();
# 0 "<command-line>" 2
# 1 "code2/HelloWorld2.c"
# 1 "./comelang2.h" 1
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
char *strncat(char *dst, char *src, size_t sz);

int strcmp(const char *s1, const char *s2);
int strncmp(const char s1, const char s2, size_t n);

void exit(int status);



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



    long* size2 = (long*)(mem + sizeof(int));

    *size2 = size*count + sizeof(long) + sizeof(int);

    return mem + sizeof(int) + sizeof(long);
}

static void* come_increment_ref_count(void* mem)
{
    if(mem == ((void*)0)) {
        return mem;
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    (*ref_count)++;

    return mem;
}

static void* come_decrement_ref_count(void* mem, bool no_decrement, bool no_free)
{
    if(mem == ((void*)0)) {
        return ((void*)0);
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    if(!no_decrement) {
        (*ref_count)--;
    }

    int count = *ref_count;
    if(!no_free && count <= 0) {
        ncfree(ref_count);
        return ((void*)0);
    }

    return mem;
}

static void come_free_object(void* mem)
{
    if(mem == ((void*)0)) {
        return;
    }

    int* ref_count = (int*)((char*)mem - sizeof(int) - sizeof(long));

    ncfree(ref_count);
}

static void call_finalizer(void* fun, void* mem, int call_finalizer_only, int no_decrement, int no_free)
{
    if(mem == ((void*)0)) {
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



    long* size_p2 = (long*)((char*)ret + sizeof(int));
    *size_p2 = size;

    return (char*)ret + sizeof(int) + sizeof(long);
}

static void int::times(int self, void* parent, void (*block)(void* parent))
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

    int length(list<T>* self)
    {
        return self.len;
    }

    void insert(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len + 1;
        }
        if(position < 0) {
            position = 0;
        }
        if(self.len == 0 || position >= self.len)
        {
            self.push_back(item);
            return;
        }

        if(position == 0) {
            list_item<T>* litem = borrow new list_item<T>;

            litem.prev = null;
            litem.next = self.head;
            litem.item = item;

            self.head.prev = litem;
            self.head = litem;

            self.len++;
        }
        else if(self.len == 1) {
            var litem = borrow new list_item<T>;

            litem.prev = self.head;
            litem.next = self.tail;
            litem.item = item;

            self.tail.prev = litem;
            self.head.next = litem;

            self.len++;
        }
        else {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(position == i) {
                    list_item<T>* litem = borrow new list_item<T>;

                    litem.prev = it.prev;
                    litem.next = it;
                    litem.item = item;

                    it.prev.next = litem;
                    it.prev = litem;

                    self.len++;
                }

                it = it.next;
                i++;
            }
        }
    }
    void reset(list<T>* self) {
        list_item<T>* it = self.head;
        while(it != null) {
            var prev_it = it;
            it = it.next;
            delete borrow prev_it;
        }

        self.head = null;
        self.tail = null;

        self.len = 0;
    }
    void delete(list<T>* self, int head, int tail)
    {
        if(head < 0) {
            head += self.len;
        }
        if(tail < 0) {
            tail += self.len + 1;
        }

        if(head > tail) {
            int tmp = tail;
            tail = head;
            head = tmp;
        }

        if(head < 0) {
            head = 0;
        }

        if(tail > self.len) {
            tail = self.len;
        }

        if(head == tail) {
            return;
        }

        if(head == 0 && tail == self.len)
        {
            self.reset();
        }
        else if(head == 0) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i < tail) {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else if(i == tail) {
                    self.head = it;
                    self.head.prev = null;
                    break;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else if(tail == self.len) {
            list_item<T>* it = self.head;
            int i = 0;
            while(it != null) {
                if(i == head) {
                    self.tail = it.prev;
                    self.tail.next = null;
                }

                if(i >= head) {
                    list_item<T>*? prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }
        }
        else {
            list_item<T>* it = self.head;

            list_item<T>* head_prev_it = null;
            list_item<T>* tail_it = null;


            int i = 0;
            while(it != null) {
                if(i == head) {
                    head_prev_it = it.prev;
                }
                if(i == tail) {
                    tail_it = it;
                }

                if(i >= head && i < tail)
                {
                    list_item<T>* prev_it = it;

                    it = it.next;
                    i++;

                    delete borrow prev_it;

                    self.len--;
                }
                else {
                    it = it.next;
                    i++;
                }
            }

            if(head_prev_it != null) {
                head_prev_it.next = tail_it;
            }
            if(tail_it != null) {
                tail_it.prev = head_prev_it;
            }
        }
    }
    void replace(list<T>* self, int position, T item)
    {
        if(position < 0) {
            position += self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(position == i) {
                it.item = item;
                break;
            }
            it = it.next;
            i++;
        }
    }

    int find(list<T>* self, T& item, int default_value) {
        int it2 = 0;
        list_item<T>* it = self.head;
        while(it != null) {
            if(it.item.equals(item)) {
                return it2;
            }
            it2++;

            it = it.next;
        }

        return default_value;
    }
    bool equals(list<T>* left, list<T>* right)
    {
        if(left.len != right.len) {
            return false;
        }

        list_item<T>* it = left.head;
        list_item<T>* it2 = right.head;

        while(it != null) {
            if(!it.item.equals(it2.item)) {
                return false;
            }

            it = it.next;
            it2 = it2.next;
        }

        return true;
    }
    list<T>*% sublist(list<T>* self, int begin, int tail) {
        list<T>*% result = new list<T>.initialize();

        if(begin < 0) {
            begin += self.len;
        }

        if(tail < 0) {
            tail += self.len + 1;
        }

        if(begin < 0) {
            begin = 0;
        }

        if(tail >= self.len) {
            tail = self.len;
        }

        list_item<T>* it = self.head;
        int i = 0;
        while(it != null) {
            if(i >= begin && i < tail) {
                result.push_back(it.item);
            }
            it = it.next;
            i++;
        };

        return result;
    }
}



typedef char*% string;

static string __builtin_string(char* str)
{
    int len = strlen(str) + 1;

    char*% result = new char[len];

    strncpy(result, str, len);

    return result;
}

static bool int::equals(int self, int right)
{
    return self == right;
}

static bool bool::equals(bool self, bool right)
{
    return self == right;
}


static bool char::equals(char self, char right)
{
    return self == right;
}

static bool short::equals(short self, short right)
{
    return self == right;
}

static bool long::equals(long self, long right)
{
    return self == right;
}

static bool string::equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}

static bool char*::equals(char* self, char* right)
{
    return strcmp(self, right) == 0;
}
# 2 "code2/HelloWorld2.c" 2

struct sData
{
    char*% a;
};

int*% funHeap(int x, int y)
{
    int*% result = new int;

    *result = x + y;

    return result;
}

int funHeap2(int*% x, int*% y)
{
    return *x + *y;
}

impl int*
{
    int fun(int* self) {
        return *self;
    }
}

int main()
{
    if(1) {
        char*% a = new char[128];
    }

    printf("%ld\n", sizeof(unsigned long));

    char* p = "ABC";

    void* p2 = "ABC";

    printf("%s\n", (char*)p2);

    printf("%c\n", *p);

    int count = 0;
    int size2 = 1;

    char* mem2 = calloc(1, sizeof(int)+sizeof(long)+count*size2);

    free(mem2);

    int b;
    int *a = &b;

    (*a) = 123;

    int a2 = 123;

    if(true) {
        int b = 234;
        int n = 0;
        while(n < 3) {
            printf("a %d\n", a2);
            printf("b %d\n", b);
            n++;
        }
    }

    char*% ax = new char[128];

    if(1) {
        char*% a = new char[128];
        char*% b = a;

        sData data;
        data.a = a;
    }

    char*% str = new char[128];

    strncpy(str, "ABC", 128);

    sData*% data = new sData;
    data.a = str;

    puts(data.a);

    funHeap(7,7);

    xassert("right value test", *funHeap(3,4) == 7);

    int*% axyz = funHeap(1,2);

    xassert("variable test", *axyz == 3);

    int*% xxx = new int;
    *xxx = 1;
    int*% yyy = new int;
    *yyy = 2;

    xassert("heap", funHeap2(xxx, yyy) == 3);

    int*% zzz = new int;
    new int;

    int bzyz = 123;

    int* azyz = &bzyz;

    xassert("impl", azyz.fun() == 123);

    int n = 0;

    3.times() {
        puts("HO!");
        printf("%d\n", n);
        n++;
    }
    list<string>*% liX = new list<string>.initialize();

    liX.push_back(string("ABC"));
    liX.push_back(string("DEF"));
    liX.push_back(string("GHI"));

    for(var it = (liX).begin(); !(liX).end(); it = (liX).next()) {
        printf("%s\n", it);
    }

    list<int>*% liX2 = new list<int>.initialize();

    liX2.push_back(1);
    liX2.push_back(2);
    liX2.push_back(3);

    for(var it = (liX2).begin(); !(liX2).end(); it = (liX2).next()) {
        printf("%d\n", it);
    }

    int aX = 123;
    liX2.each() {
        printf("%d %d\n", it, aX);
        aX = 2;
    }

    xassert("method_block test", aX == 2);

    int aXYZY;

    xassert("var initialize test", aXYZY == 0);

    list<string>*% li = new list<string>.initialize();

    li.push_back(string("ABC"));
    li.push_back(string("DEF"));
    li.push_back(string("GHI"));

    for(var it = (li).begin(); !(li).end(); it = (li).next()) {
        printf("%s\n", it);
    }

    list<int>*% li2 = new list<int>.initialize();

    li2.push_back(1);
    li2.push_back(2);
    li2.push_back(3);

    for(var it = (li2).begin(); !(li2).end(); it = (li2).next()) {
        printf("%d\n", it);
    }

    int aXL = 123;
    li2.each() {
        printf("%d %d\n", it, aXL);
        aXL = 2;
    }

    printf("a %d\n", aXL);

    xassert("list::item", li2.item(0, -1) == 1);

    li2.insert(1, 5);

    xassert("list::insert", li2.item(0, -1) == 1 && li2.item(1, -1) == 5 && li2.item(2, -1) == 2 && li2.item(3, -1) == 3);

    li.insert(1, string("GGG"));

    xassert("list::insert", strcmp(li.item(0, -1), "ABC") == 0 && strcmp(li.item(1, -1), "GGG") == 0 && strcmp(li.item(2,-1), "DEF") == 0 && strcmp(li.item(3,-1), "GHI") == 0);

    li.reset();

    xassert("list::reset", li.length() == 0);

    li2.delete(0, 1);

    xassert("list::delete", li2.item(0, -1) == 5 && li2.item(1, -1) == 2 && li2.item(2, -1) == 3);

    var li3 = new list<string>.initialize();

    li3.push_back(string("AAA"));
    li3.push_back(string("BBB"));
    li3.push_back(string("CCC"));

    li3.replace(0, string("ABC"));

    xassert("list::replace", strcmp(li3.item(0, null), "ABC") == 0 && strcmp(li3.item(1, null), "BBB") == 0 && strcmp(li3.item(2, null), "CCC") == 0);

    var li4 = new list<int>.initialize();

    li4.push_back(1);
    li4.push_back(3);
    li4.push_back(5);

    var li5 = new list<int>.initialize();

    li5.push_back(1);
    li5.push_back(3);
    li5.push_back(5);

    xassert("list::equals", li4.equals(li5));
    xassert("list::find", li4.find(5,-1) == 2);

    var li6 = new list<int>.initialize();

    li6.push_back(3);
    li6.push_back(5);

    xassert("list::sublist", li5.sublist(1, -1).equals(li6));

    int*% axyzX;

    axyzX = new int;
    axyzX = new int;

    return 0;
}
