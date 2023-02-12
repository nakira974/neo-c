#include <neo-c.h>

class sData(int a, int b)
{
    int self.a = a;
    int self.b = b;
};

int main(int argc, char** argv)
{
    map<sData*, char*>* m = new map<sData*, char*>();
    
    m.insert(new sData(1, 2), "AAA");
    m.insert(new sData(2, 3), "BBB");
    
    return 0;
}
