typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
struct sA_int
{
    int a;
    int b;
    char* c;
};
struct sA_int
{
    int a;
    int b;
    char* c;
};
struct sA_int
{
    int a;
    int b;
    char* c;
};
struct sA_int
{
    int a;
    int b;
    char* c;
};

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);
int main(int argc, char** argv);
struct sA* sA_initialize_int(struct sA* self, int a, int b);
void sA_finalize(struct sA* self);

int main(int argc, char** argv)
{
void* right_value0;
void* right_value2;
struct sA* a=(null);
igc_decrement_ref_count(a);
return 0;
}

struct sA* sA_initialize_int(struct sA* self, int a, int b)
{
void* right_value1;
self->a=a;
self->b=b;
self->c=(right_value1 = igc_calloc(128,1));
return self;
}

void sA_finalize(struct sA* self)
{
if(self!=(((void*)0))&&self->c!=(((void*)0))) {
igc_decrement_ref_count((self->c));
}
}

