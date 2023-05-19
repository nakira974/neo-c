typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
;
void* gc_ncmemdup(void* block);
;
struct __method_block_stack_frame0
{
    int* a;
    int* argc;
    char*** argv;
};

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
int printf(const char* format, ...);
int puts(const char* s);
void* memset(void* s, int c, unsigned long n);
void times(int n, void* parent, void (*fun)(void*));
int main(int argc, char** argv);
void lambda0(struct __method_block_stack_frame0* parent);

void times(int n, void* parent, void (*fun)(void*))
{
puts("AAA");
    int i;
    memset(&i, 0, sizeof(int));
puts("BBBB");
    while (i<n) {
puts("CCCC");
        fun(parent);
puts("DDD");
        i=i+1;
    }
}

int main(int argc, char** argv)
{
    int a=1;
    struct __method_block_stack_frame0 current_stack0;
    current_stack0.a = &a;
    current_stack0.argc = &argc;
    current_stack0.argv = &argv;
    (times(3,&current_stack0,((void*)(lambda0))));
}

void lambda0(struct __method_block_stack_frame0* parent)
{
        (puts("HELLO METHOD BLOCK"));
        (printf("a %d\n",*parent->a));
}

