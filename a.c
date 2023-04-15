#include <comelang.h>
#include <stdio.h>

/*
int fun(int x = 123, int y = 345, int z = 456) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

struct sData 
{
    int x;
    int y;
    int z;
};

int sData*::fun(sData* self, int x = 123, int y = 345, int z = 456)
{
    self.x = x;
    self.y = y;
    self.z = z;
}

void sData*::show(sData* self)
{
    printf("x %d y %d z %d\n", self.x, self.y, self.z);
}

int putc(int c, FILE* f) version 2
{
    int result = inherit(c, f);
    puts("");
    
    return result;
}

struct sData2
{
    map<string,int>*% m1;
};

void sData2::finalize(sData2* self)
{
    delete borrow self.m1;
}
*/

struct sInfo
{
    smart_pointer<char>*% p;
};

void funX(sInfo* info)
{
    info->p++
}

void funX2(sInfo* info)
{
    info->p++;
}

int main(int argc, char** argv) 
{
    using unsafe; 
    
    auto info = new sInfo;
    
/*
    info->p = "ABC".to_buffer().to_pointer();
    
    funX(info);
    funX2(info);
    
    auto p = "ABC".to_buffer().to_pointer();
    
    p++;
    
    xassert("auto pointer test", *info->p == 'C' && *p == 'B');
*/
    
    return 0;
}
