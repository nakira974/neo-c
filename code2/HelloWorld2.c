#include <comelang2.h>

struct sData
{
    char*% a;
};

int*% funHeap(int x, int y)
{
    int*% result = new int;
    
    *result = x + y;
    
    return result;
}

int funHeap2(int*% x, int*% y)
{
    return *x + *y;
}

impl int*
{
    int fun(int* self) {
        return *self;
    }
}

interface IA
{
    int fun(int a, int b);
};

struct sDataA
{
    int a;
    int b;
};

sDataA*% sDataA*::initialize(sDataA*% self, int a, int b)
{
    self.a = a;
    self.b = b;
    
    return self;
}

int sDataA*::fun(sDataA* self, int a, int b)
{
    return self.a + self.b + a + b;
}

void fun_default_parametor(int x=1, int y=2)
{
    xassert("default parametor", x == 1 && y == 2);
}

int main()
{
    if(1) {
        char*% a = new char[128];
    }
    
    printf("%ld\n", sizeof(unsigned long));
    
    char* p = "ABC";
    
    void* p2 = "ABC";
    
    printf("%s\n", (char*)p2);
    
    printf("%c\n", *p);
    
    int count = 0;
    int size2 = 1;
    
    char* mem2 = calloc(1, sizeof(int)+sizeof(long)+count*size2);
    
    free(mem2);
    
    int b;
    int *a = &b;
    
    (*a) = 123;
    
    int a2 = 123;
    
    if(true) {
        int b = 234;
        int n = 0;
        while(n < 3) {
            printf("a %d\n", a2);
            printf("b %d\n", b);
            n++;
        }
    }
    
    char*% ax = new char[128];
    
    if(1) {
        char*% a = new char[128];
        char*% b = a;
        
        sData data;
        data.a = a;
    }
    
    char*% str = new char[128];
    
    strncpy(str, "ABC", 128);
    
    sData*% data = new sData;
    data.a = str;
    
    puts(data.a);
    
    funHeap(7,7);
    
    xassert("right value test", *funHeap(3,4) == 7);
    
    int*% axyz = funHeap(1,2);
    
    xassert("variable test", *axyz == 3);
    
    int*% xxx = new int;
    *xxx = 1;
    int*% yyy = new int;
    *yyy = 2;
    
    xassert("heap", funHeap2(xxx, yyy) == 3);
    
    int*% zzz = new int;
    new int;
    
    int bzyz = 123;
    
    int* azyz = &bzyz;
    
    xassert("impl", azyz.fun() == 123);
    
    int n = 0;
    
    3.times() {
        puts("HO!");
        printf("%d\n", n);
        n++;
    }
    
    list<string>*% liX = new list<string>.initialize();
    
    liX.push_back(string("ABC"));
    liX.push_back(string("DEF"));
    liX.push_back(string("GHI"));
    
    foreach(it, liX) {
        printf("%s\n", it);
    }
    
    list<int>*% liX2 = new list<int>.initialize();
    
    liX2.push_back(1);
    liX2.push_back(2);
    liX2.push_back(3);
    
    foreach(it, liX2) {
        printf("%d\n", it);
    }
    
    int aX = 123;
    liX2.each() {
        printf("%d %d\n", it, aX);
        aX = 2;
    }
    
    xassert("method_block test", aX == 2);
    
    int aXYZY;
    
    xassert("var initialize test", aXYZY == 0);
    
    list<string>*% li = new list<string>.initialize();
    
    li.push_back(string("ABC"));
    li.push_back(string("DEF"));
    li.push_back(string("GHI"));
    
    foreach(it, li) {
        printf("%s\n", it);
    }
    
    list<int>*% li2 = new list<int>.initialize();
    
    li2.push_back(1);
    li2.push_back(2);
    li2.push_back(3);
    
    foreach(it, li2) {
        printf("%d\n", it);
    }
    
    int aXL = 123;
    li2.each() {
        printf("%d %d\n", it, aXL);
        aXL = 2;
    }
    
    xassert("var of method block", aXL == 2);
    
    xassert("list::item", li2.item(0, -1) == 1);
    
    li2.insert(1, 5);
    
    xassert("list::insert", li2.item(0, -1) == 1 && li2.item(1, -1) == 5 && li2.item(2, -1) == 2 && li2.item(3, -1) == 3);
    
    li.insert(1, string("GGG"));
    
    xassert("list::insert", strcmp(li.item(0, -1), "ABC") == 0 && strcmp(li.item(1, -1), "GGG") == 0 && strcmp(li.item(2,-1), "DEF") == 0 && strcmp(li.item(3,-1), "GHI") == 0);
    
    li.reset();
    
    xassert("list::reset", li.length() == 0);
    
    li2.delete(0, 1);
    
    xassert("list::delete", li2.item(0, -1) == 5 && li2.item(1, -1) == 2 && li2.item(2, -1) == 3);
    
    var li3 = new list<string>.initialize();
    
    li3.push_back(string("AAA"));
    li3.push_back(string("BBB"));
    li3.push_back(string("CCC"));
    
    li3.replace(0, string("ABC"));
    xassert("list::replace", strcmp(li3.item(0, null), "ABC") == 0 && strcmp(li3.item(1, null), "BBB") == 0 && strcmp(li3.item(2, null), "CCC") == 0);
    
    var li4 = new list<int>.initialize();
    
    li4.push_back(1);
    li4.push_back(3);
    li4.push_back(5);
    
    var li5 = new list<int>.initialize();
    
    li5.push_back(1);
    li5.push_back(3);
    li5.push_back(5);
    
    xassert("list::equals", li4.equals(li5));
    xassert("list::find", li4.find(5,-1) == 2);
    
    var li6 = new list<int>.initialize();
    
    li6.push_back(3);
    li6.push_back(5);
    
    xassert("list::sublist", li5.sublist(1, -1).equals(li6));
    
    int*% axyzX;
    
    axyzX = new int;
    axyzX = new int;
    
    xassert("operator equals", string("AAA") === string("AAA"));
    
    xassert("operator test", "AAA" + "BBB" === "AAABBB");
    
    char* strXYXY = "ABC";
    
    xassert("operator test", *(strXYXY + 1) == 'B');
    
    list<int>*% liZ = new list<int>.initialize();
    
    liZ.push_back(1);
    liZ.push_back(2);
    liZ.push_back(3);
    
    liZ.each {
        printf("%d\n", it);
    }
    
    liZ[0] = 777;
    
    printf("liZ[0] %d\n", liZ[0]);
    
    list<int>*% liZ2 = new list<int>.initialize();
    
    liZ2.push_back(777);
    liZ2.push_back(2);
    liZ2.push_back(3);
    
    xassert("list equals", liZ === liZ2);
    
    xassert("list equals test", [1,2,3] === [1,2,3]);
    
    [1,2,3,4,5].each {
        printf("%d\n", it);
    }
    xassert("map equals", ["AAA":1, "BBB":2] === ["AAA":1, "BBB":2]);
    
    var m1 = ["AAA":1, "BBB":2];
    
    printf("%d %d\n", m1["AAA"], m1["BBB"]);
    
    var m2 = clone m1;
    
    printf("%d %d\n", m2["AAA"], m2["BBB"]);
    
    xassert("map clone", m1 === m2);

    tuple1<int>*% tt1 = new tuple1<int>.initialize(1);
    
    tt1.v1 = 111;
    
    printf("%d\n", tt1.v1);
    
    tuple1<string>*% tt2 = new tuple1<string>.initialize(string("ABC"));
    
    tt2.v1 = string("DEF");
    
    printf("%s\n", tt2.v1);
    
    tuple1<string>*% tt3 = clone tt2;
    
    printf("(%s)\n", tt3.v1);

    tuple1<int>*% ttt1 = new tuple1<int>.initialize(1);
    
    ttt1.v1 = 111;
    
    printf("%d\n", ttt1.v1);
    
    tuple1<string>*% ttt2 = new tuple1<string>.initialize(string("ABC"));
    
    ttt2.v1 = string("DEF");
    
    printf("%s\n", ttt2.v1);
    
    tuple1<string>*% ttt3 = clone ttt2;
    
    printf("(%s)\n", ttt3.v1);
    
    xassert("tuple test", ttt2 === ttt3);
    
    tuple2<string, int>*% t4 = (string("ABC"), 5);
    
    xassert("tuple test", t4.v1 === string("ABC") && t4.v2 === 5);
    xassert("tuple testX", ("AAA", 7) === ("AAA", 7));
    xassert("tuple testX", ("AAA", 8) !== ("AAA", 7));
    
    IA*% ia = new sDataA.initialize(111,222) implements IA;
    
    printf("%d\n", ia.fun(0, 0));
    
    list<IA*%>*% liIA = new list<IA*%>.initialize();
    
    liIA.push_back(new sDataA.initialize(1, 1) implements IA);
    liIA.push_back(new sDataA.initialize(2, 2) implements IA);
    liIA.push_back(new sDataA.initialize(3, 3) implements IA);
    
    foreach(it, liIA) {
        printf("%d\n", it.fun(0, 0));
    }
    
    var aZZZ, bZZZ = (1,2, false);
    
    xassert("tuple test", aZZZ == 1 && bZZZ == 2);
    
    fun_default_parametor();
    
    return 0;
}

