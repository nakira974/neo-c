#include <comelang2.h>

struct sInfo
{
    int a;
    int b;
};

struct sType
{
    int a;
    int b;
};

tuple2<list<sType*%>*%,bool>*% parse_params(sInfo* info)
{
    return (new list<sType*%>(), false);
    //return new tuple2<list<sType*%>*%,bool>(new list<sType*%>(), false);
}

int main(int argc, char** argv)
{
    sInfo info;
    var a, b = parse_params(&info);
    
    return 0;
}
