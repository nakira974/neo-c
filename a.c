#include <comelang.h>

struct sInfo2
{
    string a;
};

struct sInfo
{
    string a;
    sInfo2*% b;
};

int main(int argc, char** argv)
{
    sInfo info;
    
    var a = string("BBBB");
    info.a = clone a;
    info.a[0] = 'X';
    info.b = new sInfo2;
    info.b.a = a;
    info.b.a[0] = 'S';
    
    puts(a);
    puts(info.a);
    puts(info.b.a);
    
    return 0;
}
