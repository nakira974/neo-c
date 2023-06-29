struct Data
{
int a;
int b;
};
union Data2
{
float a;
double b;
};
enum eEnumA { kA,kB};
typedef int int32;
struct sDataX
{
int a;
int b;
};
typedef struct sDataX DataY;
typedef struct sDataX DataX;

int puts(const char* str);
int printf(const char* format, ...);
int fun(int x, int y);
void int_fun(int self);
int main();

int fun(int x, int y){
    return (x+y);
}

void int_fun(int self){
    printf("%d\n",self);
}

int main(){
int a_0;
const char* str_1;
int i_2;
int c_3;
int i_4;
int i_5;
int aa_6;
int i_7;
int x_8;
enum eEnumA enum_data_9;
struct sDataX data_10;
    a_0=1;
    str_1="HELLO WORLD";
    puts(str_1);
    printf("%d\n",a_0);
    if(1) {
        puts("IF OK");
    }
    else if(2) {
        puts("ELSE IF OK");
    }
    else {
        puts("ELSE OK");
    }
    do {
        puts("GUOOOOO");
    } while(0);
    for(
    i_2=0;
    3;
    2
    ){
        printf("%d\n",a_0);
        printf("%d\n",i_2);
    }
    switch (1) {
        case 1:
        break;
        case 2:
        break;
    }
    c_3=(1+(3*4));
    printf("%d\n",c_3);
    printf("%d\n",(c_3<<1));
    for(
    i_4=0;
    (i_4<3);
    i_4=(i_4+1)
    ){
        printf("%d\n",i_4);
    }
    for(
    i_5=0;
    (i_5<3);
    i_5=(i_5+1)
    ){
        printf("%d\n",i_5);
    }
    aa_6=2;
    for(
    i_7=0;
    (i_7<3);
    i_7=(i_7+1)
    ){
        printf("%d %d\n",i_7,aa_6);
    }
    if(1) {
        puts("IF OK");
    }
    else if(2) {
        puts("ELSE IF OK");
    }
    else {
        puts("ELSE OK");
    }
    printf("%d\n",fun(1,2));
    x_8=123;
    printf("%d\n",x_8);
    data_10.a=123;
    data_10.b=234;
    printf("%d %d\n",data_10.a,data_10.b);
    data_10.a++;
    printf("data.a %d\n",data_10.a);
    data_10.a--;
    printf("data.a %d\n",data_10.a);
    data_10.a+=2;
    printf("data.a %d\n",data_10.a);
    data_10.a*=2;
    printf("data.a %d\n",data_10.a);
    data_10.a/=2;
    printf("data.a %d\n",data_10.a);
    data_10.a%=2;
    printf("data.a %d\n",data_10.a);
    data_10.a<<=2;
    printf("data.a %d\n",data_10.a);
    data_10.a>>=2;
    printf("data.a %d\n",data_10.a);
    data_10.a&=2;
    printf("data.a %d\n",data_10.a);
    data_10.a|=2;
    printf("data.a %d\n",data_10.a);
    data_10.a^=2;
    printf("data.a %d\n",data_10.a);
    int_fun(1);
    return 0;
}

