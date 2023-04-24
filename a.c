#include <comelang.h>

struct ZVALUE
{
    string a;
    wstring b;
};

ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, string a, wstring b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

int main(int argc, char** argv) 
{
    list<ZVALUE*%>*% listValue = new list<ZVALUE*%>();
    listValue.push_back(new ZVALUE(string("AAA"), null!));
    listValue.push_back(new ZVALUE(null!, wstring("BBB")));
    
    list<ZVALUE*%>*% list1 = listValue.map {
        ZVALUE*% var_value = clone it;
        return new ZVALUE(string("AAAA"), wstring("BBB"));
    }

    return 0;
}
