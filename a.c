#include <comelang.h>

struct sData
{
    int a;
    int b;
    string c;
};

exception tuple2<sData*%,string>*% parse_type()
{
    sData*% data = new sData;
    data.a = 123;
    data.b = 234;
    data.c = string("DEF");
    string str = string("ABC");
    
    return new tuple2<sData*%, string>(data, str);
}

struct sVar
{
    sData*% data;
};

sVar*% sVar*::initialize(sVar*% self, sData* data)
{
    self.data = clone data;
    
    return self;
}


int fun() {
    if(true) {
        var data, str = parse_type().catch
        {
            puts("AAA");
        }
        
        printf("data %d %d %s\n", data.a, data.b, data.c);
        
        sVar*% var_ = new sVar(data);
        
        map<string, sVar*%>*% m= new map<string, sVar*%>();
        
        m.insert(string("ABC"), var_);
        
        return 1;
    }
    
    return 0;
}

int main(int argc, char** argv)
{
    fun();
    
    return 0;
}

