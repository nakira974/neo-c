#include <neo-c.h>

struct sInfo {
    vector<string>*% strs;
    string str2;
};

int main()
{
    sInfo info;
    
    info.strs = new vector<string>();
    
    info.strs.push_back(string("AAA"));
    info.str2 = string("ABC");
    
    return 0;
}

