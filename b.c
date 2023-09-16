#include <comelang2.h>
#include <stdio.h>

int main(int argc, char** argv)
{
    var a = [string("AAA"):1, string("BBB"):2];
    printf("%d\n", a[string("AAA")]);
    return 0;
}
