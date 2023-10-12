#include <comelang2.h>
#include <comelang2-str.h>

void wchar_t*::fun(char* aaa)
{
}

void fun2(char* aaa)
{
    wchar_t*::fun(aaa);
}

int main(int argc, char** argv)
{
    return 0;
}
