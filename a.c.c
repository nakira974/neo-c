typedef void* protocol_obj_t;
void* call_cloner(void* fun, void* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void* ncmemdup(void* block);
void* gc_ncmemdup(void* block);
typedef long size_t;

void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
int puts(char* str);
void* calloc(long count, long size);
int printf(char* format, ...);
int fun(int x, int y);
void funX(long count, long size);
int main(int argc, char** argv);

int fun(int x, int y)
{
return x+y;;
}

void funX(long count, long size)
{
void* right_value0;
((void*)0);
int* a=(right_value0 = igc_calloc(1,4));
*a=1;;
1;
*(&(*a))=(*a)+1;;
(*a)-1;
(printf("%d\n",*a));
igc_decrement_ref_count(a);
}

int main(int argc, char** argv)
{
come_gc_init();;
(funX(1,2));
return 0;;
}

