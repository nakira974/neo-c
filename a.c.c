typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
struct sA
{
    int a;
    int b;
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
int sAp_operator_add(struct sA* left, struct sA* right);
int main();
void sA_finalize(struct sA* self);

int sAp_operator_add(struct sA* left, struct sA* right)
{
return left->a+right->b;
}

int main()
{
void* right_value0;
void* right_value1;
struct sA* a=(right_value0 = igc_calloc(1,8));
struct sA* b=(right_value1 = igc_calloc(1,8));
int c=sAp_operator_add(a,b);
igc_decrement_ref_count(a);
igc_decrement_ref_count(b);
return 0;
}

void sA_finalize(struct sA* self)
{
}

