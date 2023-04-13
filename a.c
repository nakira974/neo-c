#include <comelang.h>

int main(int argc, char** argv)
{
    var m = new map<char*, int>();
    m.insert("AAA", 1);
    m.insert("BBB", 2);
    m.insert("KKK", 3);
    m.insert("CCC", 3);
    var m2 = new map<char*, int>();
    m2.insert("AAA", 1);
    m2.insert("BBB", 2);
    m2.insert("CCC", 3);
    m.insert("KKK", 3);
    xassert("map equals", m === m2);
    
    return 0;
}
