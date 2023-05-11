
void come_gc_init();
void come_boehm_gc_init();
void come_gc_final();
void* igc_calloc(long count, long size);
void igc_increment_ref_count(void* mem);
void igc_decrement_ref_count(void* mem);
void unwrap_exception(char* sname, int sline, char* mem);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);
int main(int argc, char** argv);

int main(int argc, char** argv)
{
void* right_value0;
void* right_value1;
void* right_value2;
void* right_value3;
char* inline_result_variable1;
{
char* x = "ABC";
char* y = "DEF";
char* str=(right_value0 = igc_calloc(128,1));
(strncpy(str,x,128));
(strncpy(str,y,128));
inline_result_variable1 = str;
goto inline_func_end_label1;

inline_func_end_label1:
0;
}
char* a=inline_result_variable1;
char* inline_result_variable2;
{
char* x = "GGG";
char* y = "HHH";
char* str=(right_value2 = igc_calloc(128,1));
(strncpy(str,x,128));
(strncpy(str,y,128));
inline_result_variable2 = str;
goto inline_func_end_label2;

inline_func_end_label2:
0;
}
char* b=inline_result_variable2;
igc_decrement_ref_count(a);
igc_decrement_ref_count(b);
return 0;
}
