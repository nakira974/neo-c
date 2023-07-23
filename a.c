//#include <comelang2.h>

void fun(void* mem) 
{
}

int main(int argc, char** argv)
{
    void (*funX)(void* mem) = fun;
    
    funX(0);
    
    return 0;
}

