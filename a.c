#define NULL ((void*)0)
using comelang;

void* igc_calloc(size_t count, size_t size);
void call_finalizer(void* fun, void* mem, int call_finalizer_only);
void igc_decrement_ref_count(void* mem);
void igc_increment_ref_count(void* mem);

using unsafe;

char* strncpy(char* str, char* str2, int n);
int strlen(char* str);
void puts(char* str);

inline char*% fun(char* x, char* y)
{
    char*% str = new char[128];
    strncpy(str, x, 128);
    strncpy(str, y, 128);
    return str;
}

int main(int argc, char** argv)
{
    char*% a = fun("ABC", "DEF");
    char*% b = fun("GGG", "HHH");
    
    return 0;
}

