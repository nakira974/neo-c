#include "common.h"
#include <ctype.h>

struct sIntNode
{
    int value;
    int sline;
    string sname;
};

sIntNode*% sIntNode*::initialize(sIntNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sIntNode*::compile(sIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("int", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sIntNode*::terminated()
{
    return false;
}

int sIntNode*::sline(sIntNode* self, sInfo* info)
{
    return self.sline;
}

string sIntNode*::sname(sIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sUIntNode
{
    unsigned int value;
    int sline;
    string sname;
};

sUIntNode*% sUIntNode*::initialize(sUIntNode*% self, unsigned int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sUIntNode*::terminated()
{
    return false;
}

bool sUIntNode*::compile(sUIntNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%u", self.value);
    come_value.type = new sType("int", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sUIntNode*::sline(sUIntNode* self, sInfo* info)
{
    return self.sline;
}

string sUIntNode*::sname(sUIntNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sLongNode
{
    long value;
    int sline;
    string sname;
};

sLongNode*% sLongNode*::initialize(sLongNode*% self, unsigned long value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sLongNode*::compile(sLongNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%ld", self.value);
    come_value.type = new sType("long", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sLongNode*::terminated()
{
    return false;
}

int sLongNode*::sline(sLongNode* self, sInfo* info)
{
    return self.sline;
}

string sLongNode*::sname(sLongNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sULongNode
{
    unsigned long value;
    int sline;
    string sname;
};

sULongNode*% sULongNode*::initialize(sULongNode*% self, unsigned long value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sULongNode*::compile(sULongNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%lu", self.value);
    come_value.type = new sType("long", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sULongNode*::terminated()
{
    return false;
}

int sULongNode*::sline(sULongNode* self, sInfo* info)
{
    return self.sline;
}

string sULongNode*::sname(sULongNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sFloatNode
{
    float value;
    int sline;
    string sname;
};

sFloatNode*% sFloatNode*::initialize(sFloatNode*% self, float value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sFloatNode*::compile(sFloatNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%f", self.value);
    come_value.type = new sType("float", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sFloatNode*::terminated()
{
    return false;
}

int sFloatNode*::sline(sFloatNode* self, sInfo* info)
{
    return self.sline;
}

string sFloatNode*::sname(sFloatNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sDoubleNode
{
    double value;
    int sline;
    string sname;
};

sDoubleNode*% sDoubleNode*::initialize(sDoubleNode*% self, double value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sDoubleNode*::compile(sDoubleNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%lf", self.value);
    come_value.type = new sType("double", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

bool sDoubleNode*::terminated()
{
    return false;
}

int sDoubleNode*::sline(sDoubleNode* self, sInfo* info)
{
    return self.sline;
}

string sDoubleNode*::sname(sDoubleNode* self, sInfo* info)
{
    return string(self.sname);
}

sNode*% get_number(bool minus, sInfo* info)
{
    const int buf_size = 128;
    char buf[128+1];
    char* p2 = buf;

    if(minus) {
        *p2 = '-';
        p2++;
    }

    if(xisdigit(*info->p)) {
        while(xisdigit(*info->p) || *info->p == '_') {
            if(*info->p ==  '_') {
                info->p++;
            }
            else {
                *p2++ = *info->p;
                info->p++;
            }

            if(p2 - buf >= buf_size) {
                err_msg(info, "overflow node of number");
                exit(1);
            }
        };
        *p2 = 0;
        skip_spaces_and_lf(info);
        
        char c = *(info->p+1);

        if(*info->p == '.' && xisdigit(c)) {
            *p2++ = *info->p;
            
            if(p2 - buf >= buf_size) {
                err_msg(info, "overflow node of number");
                exit(1);
            }
            
            info->p++;
            skip_spaces_and_lf(info);
            
            while(xisdigit(*info->p) || *info->p == '_') {
                if(*info->p ==  '_') {
                    info->p++;
                }
                else {
                    *p2++ = *info->p;
                    info->p++;
                }
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
            }
            
            if(*info->p == 'e') {
                *p2++ = *info->p;
                info->p++;
    
                if(p2 - buf >= buf_size) {
                    err_msg(info, "overflow node of number");
                    exit(2);
                }
                
                if(*info->p == '+') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else if(*info->p == '-') {
                    *p2++ = *info->p;
                    info->p++;
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                }
                else {
                    err_msg(info, "invalid float value");
                    exit(2);
                }
            
                while(xisdigit(*info->p) || *info->p == '_') {
                    if(*info->p ==  '_') {
                        info->p++;
                    }
                    else {
                        *p2++ = *info->p;
                        info->p++;
                    }
        
                    if(p2 - buf >= buf_size) {
                        err_msg(info, "overflow node of number");
                        exit(2);
                    }
                };
            }
            *p2 = 0;
            skip_spaces_and_lf(info);
            
            if(*info->p == 'f' || *info->p == 'F') {
                info->p++;
                skip_spaces_and_lf(info);
                
                return new sNode(new sFloatNode(strtof(buf, NULL), info));
            }
            else if(*info->p == 'l' || *info->p == 'L') {
                info->p++;
                skip_spaces_and_lf(info);
                
                return new sNode(new sDoubleNode(strtod(buf, NULL), info));
            }
            else {
                return new sNode(new sDoubleNode(strtod(buf, NULL), info));
            }
        }
        else if(*info->p == 'u' || *info->p == 'U')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);

                if(*info->p == 'L' || *info->p == 'l')
                {
                    info->p++;
                    skip_spaces_and_lf(info);
                    
                    unsigned long lont int value2 = strtoull(buf, NULL, 0);

                    return new sNode(new sULongNode(value2, info));
                }
                else {
                    unsigned long lont int value = strtoull(buf, NULL, 0);
                    return new sNode(new sULongNode(value, info));
                }
            }
            else {
                unsigned int value = strtoul(buf, NULL, 0);
                return new sNode(new sUIntNode(value, info));
            }
        }
        else if(*info->p == 'L' || *info->p == 'l') {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sNode(new sLongNode(value, info));
            }
            else if(*info->p == 'U' || *info->p == 'u')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sNode(new sULongNode(value, info));
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sNode(new sLongNode(value, info));
            }
        }
        else {
            unsigned long lont int value = strtoll(buf, NULL, 0);
            return new sNode(new sIntNode(value, info));
        }
    }
    else {
        err_msg(info, "require digits after + or -");
        exit(2);
    }
    
    return (sNode*%)null;
}

sNode*% create_int_node(int value, sInfo* info)
{
    return new sNode(new sIntNode(value, info));
}

sNode*% get_hex_number(bool minus, sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';
    *p++ = 'x';

    while((*info->p >= '0' && *info->p <= '9') || (*info->p >= 'a' && *info->p <= 'f') || (*info->p >= 'A' && *info->p <= 'F') || *info->p == '_') 
    {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p++ = *info->p;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };
    *p = 0;
    skip_spaces_and_lf(info);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sNode(new sULongNode(-value, info));
                }
                else {
                    return new sNode(new sULongNode(value, info));
                }
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);

                if(minus) {
                    return new sNode(new sULongNode(-value, info));
                }
                else {
                    return new sNode(new sULongNode(value, info));
                }
            }
        }
        else {
            unsigned int value = strtoull(buf, NULL, 0);

            if(minus) {
                return new sNode(new sUIntNode(-value, info));
            }
            else {
                return new sNode(new sUIntNode(value, info));
            }
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sNode(new sLongNode(-value, info));
            }
            else {
                return new sNode(new sLongNode(value, info));
            }
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sNode(new sULongNode(-value, info));
            }
            else {
                return new sNode(new sULongNode(value, info));
            }
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            if(minus) {
                return new sNode(new sLongNode(-value, info));
            }
            else {
                return new sNode(new sLongNode(value, info));
            }
        }
    }
    else {
        unsigned long long int value = strtoll(buf, NULL, 0);
        if(minus) {
            return new sNode(new sIntNode(-value, info));
        }
        else {
            return new sNode(new sIntNode(value, info));
        }
    }
    
    return (sNode*%)null;
}

sNode*% get_oct_number(sInfo* info)
{
    int buf_size = 128;
    char buf[128+1];
    char* p = buf;

    *p++ = '0';

    while((*info->p >= '0' && *info->p <= '7') || *info->p == '_') {
        if(*info->p == '_') {
            info->p++;
        }
        else {
            *p = *info->p;
            p++;
            info->p++;
        }

        if(p - buf >= buf_size-1) {
            err_msg(info, "overflow node of number");
            exit(2);
        }
    };

    *p = 0;
    skip_spaces_and_lf(info);

    if(*info->p == 'u' || *info->p == 'U')
    {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            if(*info->p == 'L' || *info->p == 'l')
            {
                info->p++;
                skip_spaces_and_lf(info);
                
                unsigned long long int value = strtoull(buf, NULL, 0);

                return new sNode(new sULongNode(value, info));
            }
            else {
                unsigned long long int value = strtoull(buf, NULL, 0);
                return new sNode(new sULongNode(value, info));
            }
        }
        else {
            unsigned int value = strtoul(buf, NULL, 0);
            return new sNode(new sUIntNode(value, info));
        }
    }
    else if(*info->p == 'L' || *info->p == 'l') {
        info->p++;
        skip_spaces_and_lf(info);

        if(*info->p == 'L' || *info->p == 'l')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sNode(new sLongNode(value, info));
        }
        else if(*info->p == 'U' || *info->p == 'u')
        {
            info->p++;
            skip_spaces_and_lf(info);

            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sNode(new sULongNode(value, info));
        }
        else {
            unsigned long long int value = strtoull(buf, NULL, 0);
            return new sNode(new sLongNode(value, info));
        }
    }
    else {
        unsigned long long int value = strtoull(buf, NULL, 0);
        return new sNode(new sIntNode(value, info));
    }
    
    return (sNode*%)null;
}
