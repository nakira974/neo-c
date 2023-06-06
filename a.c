#include <comelang.h>

protocol sNode{
    int a;
    int b;
};

exception sNode*% expression()
{
    throw;
}

int main(int argc, char** argv)
{
    sNode*% node = expression().catch {
        puts("AAA");
    }
    
    return 0;
}

