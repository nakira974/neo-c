#include <comelang2.h>

struct sType
{
    int a;
    int b;
};

exception list<sType*%>*%, list<string>*%, list<string>*%, bool parse_params()
{
    return new tuple4<list<sType*%>*%, list<string>*%, list<string>*%, bool>(null, null, null, false);
}

int main(int argc, char** argv)
{
    return 0;
}
