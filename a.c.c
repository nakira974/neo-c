struct sA
{
    int* a;
};
struct sB
{
    int a;
    int b;
    int c;
};

void call_finalizer(void* fun, void* mem, int call_finalizer_only);
int fun(int a, int b);
int strlen(char* str);
void strncpy(char* , char* , int );
void puts(char* str);
char* string2(char* str);
int main(int argc, char** argv);
void sA_finalize(struct sA* self);

int fun(int a, int b)
{
return a+b;
}
char* string2(char* str)
{
void* right_value0;
int len=(strlen(str))+1;
char* result=(right_value0 = igc_calloc(len,1));
(strncpy(result,str,len));
return result;
}
int main(int argc, char** argv)
{
void* right_value1;
void* right_value2;
void* right_value3;
void* right_value4;
struct sA* obj=(right_value1 = igc_calloc(1,8));
(right_value2 = igc_calloc(1,8));
igc_decrement_ref_count(right_value2);
obj->a=(right_value3 = igc_calloc(1,4));
*obj->a=123;
(fun(*obj->a,*obj->a));
(right_value4=string2("ABC"));
igc_decrement_ref_count(right_value4);
igc_decrement_ref_count(obj);
return 0;
}
void sA_finalize(struct sA* self)
{
if(self!=(((void*)0))&&self->a!=(((void*)0))) {
igc_decrement_ref_count((self->a));
}
}
