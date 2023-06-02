#include <comelang.h>

struct sData
{
    int a;
    int b;
};

exception int solve_generics(sData* data)
{
    sData data2;
    int a = solve_generics(&data2);
}

int main()
{
    sData data;
    solve_generics(&data).catch {
        puts("AAAA");
    }
    return 0;
}

