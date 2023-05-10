
struct sA
{
    int a;
};

int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    int (*f)(int, int) = fun;
    
    fun(f(1,2), 3);
    
    return 0;
}

