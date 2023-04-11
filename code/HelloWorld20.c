#include <comelang.h>

using unsafe;

struct sInfo;

extern int gNodeID;

protocol sNode
{
    unsigned int id();
    bool compile(sInfo* info);
};

inline unsigned int sNode*::get_hash_key(sNode* self)
{
    return self.id->();
}

inline bool sNode*::equals(sNode* self, sNode* right)
{
    return (self.compile == right.compile);
}

struct ZVALUE 
{
    enum { kIntValue, kStrValue, kBoolValue, kNullValue, kFileValue, kRegexValue, kListValue, kMapValue } kind;
    
    int intValue;
    wstring strValue;
    bool boolValue;
    FILE* fileValue;
    nregex regexValue;
    list<ZVALUE*%>*% listValue;
    map<ZVALUE*%, ZVALUE*%>*% mapValue;
};

inline ZVALUE*% ZVALUE*::initialize(ZVALUE*% self, int kind, int int_value=0, wstring str_value=wstring(""), bool bool_value=false, FILE* file_value=null, nregex regex_value=null, list<ZVALUE*%>*% list_value=null, map<ZVALUE*%, ZVALUE*%>*% map_value=null)
{
    self.kind = kind;
    self.intValue = int_value;
    self.strValue = str_value;
    self.boolValue = bool_value;
    self.fileValue = file_value;
    self.regexValue = regex_value;
    self.listValue = list_value;
    self.mapValue = map_value;
    
    return self;
}

string ZVALUE*::to_string(ZVALUE* self);
unsigned int ZVALUE*::get_hash_key(ZVALUE* self);
bool ZVALUE*::equals(ZVALUE* self, ZVALUE* right);
bool ZVALUE*::operator_equals(ZVALUE* self, ZVALUE* right);
int ZVALUE*::compare(ZVALUE* self, ZVALUE* right);

struct sInfo
{
    char* p;
    string command;
    string command2;
    buffer*% codes;
    vector<sNode*%>*% nodes;
    vector<sNode*%>*% nodes2;
    int* head;
    int* op;
    vector<ZVALUE*%>*% stack;
    
    int loop_head;
    
    vector<int>*%? breaks;
    
    ZVALUE*% result_value;
    
    int stack_num;
};

struct sInfo2
{
    int c[2][2];
};

int cZYZZZZZZZZZZZZZZZZZZZZZZZZZZZ(char*% a)
{
    a = string("AAA");
    
    delete borrow a;
    
    return 0;
}

int main(int argc, char** argv)
{
    string a = string("AAAA");
    string command = null;
    for(int i=1; i<argc; i++) {
        command = string(argv[i]);
    }
    
    string command2 = clone command;
    
/*
    if(command == null) {
        fprintf(stderr, "require command\n");
        return 1;
    }
*/
    
    sInfo info;
    
    info.command = command;
    info.command = clone command;
    
    info.command2 = command;
    info.command2 = clone command;
    
    info.nodes = new vector<sNode*%>();
    
    info.nodes2 = info.nodes;
    
    var aa = [[string("A"), string("B")], [string("C")]];
    
    xassert("element overload test", aa[0][1] === "B");
    
    var bb = [string("AAA"):[1,2,3], string("BBB"):[3,5,7]];
    
    xassert("element overload test", bb[string("BBB")][0] == 3);
    
    var c = (string("CCC"), (string("BBB"), 1), "AAA");
    
    xassert("tuple test", c.1.0 === string("BBB"));
    
    xassert("list test", [[string("111"), string("222"), string("333")], [string("444"), string("555"), string("666")]] === [[string("111"), string("222"), string("333")], [string("444"), string("555"), string("666")]]);
    
    sInfo2 infoXXX;
    infoXXX.c[0][0] = 123;
    infoXXX.c[0][1] = 234;
    
    xassert("array test", infoXXX.c[0][0] == 123 && infoXXX.c[0][1] == 234);
    
    var aXYZ = ("AAA", 1);
    
    xassert("tuple test", aXYZ.0[0] == 'A');
    
    var aXYZ2 = [["AAA", "BBB"], ["BBB", "CCC"]];
    
    xassert("list of list test", aXYZ2[0][1] === "BBB");
    
    var cXYZ = ["AAA", "BBB"];
    
    xassert("list", cXYZ[0][1] == 'A');
    
    var cZZZ = [["BBB":1], ["AAA":2]];
    
    xassert("list", cZZZ[0]["BBB"] == 1);
    
    char*% cZYZ = null;
    
    cZYZZZZZZZZZZZZZZZZZZZZZZZZZZZ(string("AAA"));
    
    return 0;
}

