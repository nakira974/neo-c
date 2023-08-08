#include <comelang2.h>

struct sDataXYZ
{
    char*% a;
    int b;
};

int funX(int a, int b)
{
    return a + b;
}

char*% funX2(string a, string b)
{
    int len = strlen(a) + strlen(b) + 1;
    char*% result = new char[len];
    
    strncpy(result, a, len);
    strncat(result, b, len);
    
    return result;
}

