#include <neo-c.h>

struct sInfo {
    vector<string>*% strs;
    string str2;
};

int main()
{
    sInfo info;
    
    info.strs = new vector<string>();
    
    int a = 1;
    
    if(a != 1) {
        return 0;
    }
    
    info.strs.push_back(string("AAA"));
    info.str2 = string("ABC");
    
    return 0;
}

