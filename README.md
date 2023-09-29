
# comelang2

come together!

Yet another modern compiler. It has a collection library with reffrence count gc

version 0.9.0

``` C
#include <comelang2.h>

int fun(int x=123, int y = 234, int z = 345) 
{
    printf("x %d y %d z %d\n", x, y, z);
}

int, string fun2() 
{
    (1, string("ABC"))
}

struct sData
{
    int a;
    int b;
};

sData*% sData*::initialize(sData*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

int putc(int c, FILE* f) version 2
{
    inherit(c, f);
    puts("");
    
    return 1;
}

int main() 
{
    puts("HO!" * 3);             // HO!HO!HO!\n
    puts(xsprintf("%d", 1+1));   // 2\n
    
    3.times { puts(("HO" + "!") * 3); }    // HO!HO!HO!\nHO!HO!HO!\nHO!HO!HO!\n
    
    int xxx = 123;
    
    3.times {
        xxx+=2;
        printf("xxx %d\n", xxx); // xxx 125\nxxx 127\nxxx 129\n
    }
    printf("xxx %d\n", xxx); // xxx 129\n

    var li = ["AAA", "BBB", "CCC"]

    foreach(it, li) {
        puts(it);           // AAA\nBBB\nCCC\n
    }
    
    [1,2,3].each {
        printf("%d\n", it);   //1\n2\n3\n
    }

    var m = ["AAA":1, "BBB":2, "CCC":3]
    
    foreach(key, m) {
        var item = m[key];

        printf("%s %d\n", key, item); // AAA 1\nBBB 2\nCCC 3\n
    }

    puts("ABC".substring(0,1));   // A\n

    int fd = open("ABC", O_RDONLY).except {
        fprintf(stderr, "can't open ABC");
        exit(1);
    }

    3.times {
        puts("HELLO METHOD BLOCK");
    }

    var li2 = [1,2,3]

    li.filter { it > 1; }.each {
        printf("%d\n", it);       // 2\n3\n
    }
    
    var li2 = ["1", "2", "3", "4", "5"]

    [3,1,2,7].filter { it > 2; }.each { printf("%d\n", it); }   // 3\n7\n
    
    var ma1 = ["AAA":1, "BBB":2, "CCC":3];
    
    if(ma1["AAA"] == 1 && ma1["BBB"] == 2 && ma1["CCC"] == 3) {
        puts("OK");
    }
    
    fopen("AAA", "w").fprintf("ABC\n").fclose();
    
    fopen_block("AAA", "r") {
        it.read().print();   // ABC\n
    }
    
    puts("AAA".read());   // ABC\n\n
    
    unlink("AAA");
    
    stdin.readlines().map { it.strip(); }.join(",").printf("[%s]\n"); // if stdin is aaa\nbbb\nccc --> [aaa,bbb,ccc]\n
    
    int, int, char* t1 = (1,2,"ABC");
    
    xassert("tuple value test1", t1.v1 == 1 && t1.v2 == 2 && t1.v3 === "ABC");
    
    xassert("string equals test1", "ABC" === "ABC");
    xassert("operator overload test", "ABC" * 2 === "ABCABC");
    xassert("operator overload test", "ABC" + "DEF" === "ABCDEF");
    xassert("operator overload test2", [1,2] + [3] === [1,2,3]);
    xassert("operator overload test3", [1,2] * 2 === [1,2,1,2]);
    
    var z = [1,2,3];
    
    xassert("operator overload test", z[0] == 1 && z[1] == 2 && z[2] == 3);
    
    z[1] = 22;
    
    xassert("operator overload test", z[0] == 1 && z[1] == 22 && z[2] == 3);
    
    var zz = ["AAA":1, "BBB":2, "CCC":3];
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3);
    
    zz["DDD"] = 4
    
    xassert("operator overload test", zz["AAA"] == 1 && z["BBB"] == 22 && z["CCC"] == 3 && z["DDD"] == 4);
    
    fun(y:2,x:1);  // print x 1 y 2 z 345
    
    putc('X');     // print X\n
    
    var l, m = fun2();
    
    xassert("multiple return", l == 1 && m === "ABC");
    
    "12345\n".write("AAA");
    "12345\n".write("AAA", append:true);
    
    printf("AAA".read());  // print out 12345\n12345\n
    
    var data = new sData(3,5);
    
    xassert("class test", data.a == 3 && data.b == 5);
    
    var z = [new sData(1,2), new sData(3,4)];
    
    int x = 2;
    ([1,2] + [3]).each {
        printf("%d\n", it*x);  // 1\n6\n9\n
        x = 3;
    }
    
    printf("x %d\n", x);   // x 3\n

    return 0;
}
```

1. It is compatible with C language. The C preprocessor also works.

2. The default heap system is my original refference count heap system like rust or v or nim

3. It has Generics, inline function

4. It has a mixin-layers system. You can implement your application in layers. Each layer is complete and useful for debugging and porting. 

5. Protocol(Interface)

6. method block like Ruby

9. Default parametor values, and label parametor are supported.

10. operator overload.

# INSTALL

Required libraries are clang, gcc, make, autoconf, valgrind, gdb, lldb, musl-dev(alpine linux)

For Linux, WSL, MacOS(Darwin), userland(android), raspiberry pi, iSH(iPhone)

Fast Build. No self host

```
git clone https://github.com/ab25cq/comelang2
cd comelang2
bash fast_build.sh
```

With self-host

```
git clone https://github.com/ab25cq/comelang2
cd comelang2
bash self_host.sh
```

For termux.

```
git clone https://github.com/ab25cq/comelang2

cd comelang2
bash home_build.sh
```


# Histories

From version 0.9.0 Project started.

# Language specifications

It is almost the same as C language. Since it is not POSIX compliant, it is not compatible with C language in every detail, but I think that anyone who can use C language can use it immediately. If you don't use the heap system and do #include <comelang2.h>, you can just use it as a C compiler. 

# HELLO WORLD

```
> vim a.c
#include <stdio.h>

int main()
{
    puts("HELLO WORLD");
    return 0;
}
> comelang2 a.c
> ./a
HELLO WORLD
```

