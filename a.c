using comelang;

struct sA
{
    int*% a;
};

int fun(int x, int y)
{
    return x + y;
}

int main(int argc, char** argv)
{
    sA*% obj = new sA;
    
    fun(*obj.a, *obj.a);
    
    return 0;
}

