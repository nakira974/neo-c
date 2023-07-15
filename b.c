#include <comelang.h>

struct sType
{
    string mName;
};

tuple2<tuple3<list<string>*%, bool, list<string>*%>*%, bool>*% parse_params()
{
    var a = new sType;
    
    list<sType*%>*% b = [new sType, a];
    list<string>*% c = [string("AAAA"), string("BBB"), string("CCC")];
    list<int>*% d = [1,2,3];
    
    return ((c, false, c), false);
}

int main(int argc, char** argv)
{
    parse_params().catch {
        return 1;
    }
    
    return 0;
}
