#include <neo-c.h>

extern map<string, int>* gID;

void fun()
{
    gID = new map<string, int>();
    gID.insert(string("GGG"), 0);
}

map<string, int>* gID;

void fun2()
{
    gID.insert(string("FFF"), 0);
}

int main(int argc, char** argv)
{
    puts("OK");
    
    fun();
    
    gID.insert(string("ABC"), 1);
    gID.insert(string("DEF"), 2);
    
    foreach(it, gID) {
        int n = gID[it];
        
        printf("%s %d\n", it, n);
    }
    
    return 0;
}

