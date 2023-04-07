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

int main(int argc, char** argv)
{
    string a = string("AAAA");
    string command = null;
    for(int i=1; i<argc; i++) {
        command = string(argv[i]);
    }
    
    string command2 = clone command;
    
    if(command == null) {
        fprintf(stderr, "require command\n");
        return 1;
    }
    
    sInfo info;
    
    info.command = command;
    info.command = clone command;
    
    info.command2 = command;
    info.command2 = clone command;
    
    info.nodes = new vector<sNode*%>();
    
    info.nodes2 = clone info.nodes;
    
    vector<string%>*% v = new vector<string>();
    
    v.push_back(string("AAA")).push_back(string("BBB"));
    
    var v2 = v;
    
    v2.push_back(string("CCC"));
    
    foreach(it, v) {
        puts(it);
    }
    
    foreach(it, v2) {
        puts(it);
    }
    
    list<list<string>*%>*% li = new list<list<string>*%>();
    
    li.push_back([string("111"), string("222"), string("333")]);
    li.push_back([string("444"), string("555"), string("666")]);
    
    foreach(it, li) {
        foreach(it2, it) {
            puts(it2);
        }
    }
    
/*
    list<list<string>*%>*% li2 = clone li;
    
    foreach(it, li2) {
        foreach(it2, it) {
            puts(it2);
        }
    }
*/
    
    // === [[string("111"), string("222"), string("333")], [string("444"), string("555"), string("666")]];
    
    
    char*% xxx = null;
    
    
    
    
    return 0;
}

