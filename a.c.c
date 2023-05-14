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
struct sA_char
{
    char a;
    char b;
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
struct sA_int* sA_initialize_int(struct sA_int* self, int a, int b);
struct sA_char* sA_initialize_char(struct sA_char* self, char a, char b);
void sA_finalize_sA_int(struct sA_int* self);
void sA_finalize_sA_char(struct sA_char* self);

int main(int argc, char** argv)
{
void* right_value0;
void* right_value2;
void* right_value3;
void* right_value5;
struct sA_int* a=(right_value2 = (right_value2=sA_initialize_int((right_value0 = igc_calloc(1,16)),111,222)));
struct sA_char* b=(right_value5 = (right_value5=sA_initialize_char((right_value3 = igc_calloc(1,16)),111,222)));
call_finalizer(sA_finalize_sA_int,a,0);
call_finalizer(sA_finalize_sA_char,b,0);
return 0;
}

struct sA_int* sA_initialize_int(struct sA_int* self, int a, int b)
{
void* right_value1;
self->a=a;
self->b=b;
self->c=(right_value1 = igc_calloc(128,1));
return self;
}

struct sA_char* sA_initialize_char(struct sA_char* self, char a, char b)
{
void* right_value4;
self->a=a;
self->b=b;
self->c=(right_value4 = igc_calloc(128,1));
return self;
}

void sA_finalize_sA_int(struct sA_int* self)
{
if(self!=(((void*)0))&&self->c!=(((void*)0))) {
igc_decrement_ref_count((self->c));
}
}

void sA_finalize_sA_char(struct sA_char* self)
{
if(self!=(((void*)0))&&self->c!=(((void*)0))) {
igc_decrement_ref_count((self->c));
}
}

