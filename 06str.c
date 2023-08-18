#include "common.h"

struct sStrNode
{
    string value;
    int sline;
    string sname;
};

sStrNode*% sStrNode*::initialize(sStrNode*% self, string value, int sline, sInfo* info)
{
    self.value = string(value);
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sStrNode*::compile(sStrNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("\"%s\"", self.value);
    come_value.type = new sType("char*", info);
    come_value.type.mConstant = true;
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sStrNode*::sline(sStrNode* self, sInfo* info)
{
    return self.sline;
}

string sStrNode*::sname(sStrNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sCharNode
{
    int value;
    int sline;
    string sname;
};

sCharNode*% sCharNode*::initialize(sCharNode*% self, int value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sCharNode*::compile(sCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("%d", self.value);
    come_value.type = new sType("char", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sCharNode*::sline(sCharNode* self, sInfo* info)
{
    return self.sline;
}

string sCharNode*::sname(sCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWCharNode
{
    wchar_t value;
    int sline;
    string sname;
};

sWCharNode*% sWCharNode*::initialize(sWCharNode*% self, wchar_t value, sInfo* info)
{
    self.value = value;
    
    self.sline = info->sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWCharNode*::compile(sWCharNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%lc'", self.value);
    come_value.type = new sType("wchar_t", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWCharNode*::sline(sWCharNode* self, sInfo* info)
{
    return self.sline;
}

string sWCharNode*::sname(sWCharNode* self, sInfo* info)
{
    return string(self.sname);
}

struct sWStringNode
{
    wchar_t*% value;
    int sline;
    string sname;
};

sWStringNode*% sWStringNode*::initialize(sWStringNode*% self, wchar_t*% value, int sline, sInfo* info)
{
    self.value = value;
    
    self.sline = sline;
    self.sname = string(info->sname);
    
    return self;
}

bool sWStringNode*::compile(sWStringNode* self, sInfo* info)
{
    CVALUE*% come_value = new CVALUE;
    
    come_value.c_value = xsprintf("L'%ls'", self.value);
    come_value.type = new sType("wchar_t*", info);
    come_value.var = null;
    
    info.stack.push_back(come_value);
    
    add_come_last_code(info, "%s;\n", come_value.c_value);
    
    return true;
}

int sWStringNode*::sline(sWStringNode* self, sInfo* info)
{
    return self.sline;
}

string sWStringNode*::sname(sWStringNode* self, sInfo* info)
{
    return string(self.sname);
}

exception sNode*% expression_node(sInfo* info) version 98
{
    if(*info->p == '"') 
    {
        info->p++;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p.p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                parse_sharp(info)
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p.p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                value.append_char('\\');
                info->p++;
                
                if(*info->p == '"') {
                    value.append_char('"');
                    info->p++;
                }
                else {
                    value.append_char(*info->p);
                    info->p++;
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                info->sline = sline2;
                throw;
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);

        return new sNode(new sStrNode(value.to_string(), sline, info));
    }
    else if(*info->p == '\'') {
        info->p++;

        int c;

        if(*info->p == '\\') {
            info->p++;

            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case 'f':
                        c = '\f';
                        info->p++;
                        break;
    
                    case 'v':
                        c = '\v';
                        info->p++;
                        break;
    
                    case 'b':
                        c = '\b';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            c = *info->p;
            info->p++;
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            return new sNode(new sCharNode(c, info));
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '\'') {
        info->p+=2;

        wchar_t c;

        if(*info->p == '\\') {
            info->p++;
            
            if(xisdigit(*info->p)) {
                int n = 0;
                while(xisdigit(*info->p)) {
                    n = n * 8 + *info->p - '0';
                    info->p++;
                }
                
                c = n;
            }
            else {
                switch(*info->p) {
                    case 'n':
                        c = '\n';
                        info->p++;
                        break;
    
                    case 't':
                        c = '\t';
                        info->p++;
                        break;
    
                    case 'r':
                        c = '\r';
                        info->p++;
                        break;
    
                    case 'a':
                        c = '\a';
                        info->p++;
                        break;
    
                    case '\\':
                        c = '\\';
                        info->p++;
                        break;
    
                    case '0':
                        c = '\0';
                        
                        info->p++;
                        
                        if(xisdigit(*info->p)) {
                            int n = 0;
                            while(xisdigit(*info->p)) {
                                n = n * 8 + *info->p - '0';
                                info->p++;
                                skip_spaces_and_lf(info);
                            }
                            
                            c = n;
                        }
                        break;
                        
                    case 'x':
                    case 'X': {
                        info->p++;
                        
                        char buf[128];
                        strncpy(buf, "0x", 128);
                        while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                            char buf2[2];
                            buf2[0] = *info->p;
                            buf2[1] = '\0';
                            info->p++;
                            strncat(buf, buf2, 128);
                        }
                        
                        unsigned long long int n = strtoll(buf, NULL, 0);
                        
                        c = n;
                        }
                        break;
    
                    default:
                        c = *info->p;
                        info->p++;
                        break;
                }
            }
        }
        else {
            unsigned char p2 = *(unsigned char*)info->p;

            /// utf-8 character ///
            if(p2 > 127) {
                int size;
                char str[MB_LEN_MAX+1];

                size = ((p2 & 0x80) >> 7) + ((p2 & 0x40) >> 6) + ((p2 & 0x20) >> 5) + ((p2 & 0x10) >> 4);

                if(size > MB_LEN_MAX) {
                    err_msg(info, "invalid utf-8 character. MB_LEN_MAX");
                    info->err_num++;
                }
                else {
                    memcpy(str, info->p, size);
                    str[size] = 0;

                    if(mbtowc(&c, str, size) < 0) {
                        perror("mbtowc");
                        err_msg(info, "invalid utf-8 character. mbtowc");
                        info->err_num++;
                        c = 0;
                    }

                    info->p += size;
                }
            }
            /// ASCII character ///
            else {
                c = *info->p;
                info->p++;
            }
        }

        if(*info->p != '\'') {
            err_msg(info, "close \' to make character value");
            info->err_num++;
        }
        else {
            info->p++;

            skip_spaces_and_lf(info);

            return new sNode(new sWCharNode(c, info));
        }
    }
    /// chararacter ///
    else if(*info->p == 'L' && *(info->p+1) == '"') {
        info->p+=2;

        int sline = info->sline;

        buffer*% value = new buffer();

        while(1) {
            if(*info->p == '"') {
                info->p++;
                
                char* p = info->p.p;
                int sline = info->sline;
                
                skip_spaces_and_lf(info);
                
                if(*info->p == '"') {
                    info->p++;
                }
                else {
                    info->p.p = p;
                    info->sline = sline;
                    break;
                }
            }
            else if(*info->p == '\\') {
                info->p++;
                
                if(xisdigit(*info->p)) {
                    int len = 0;
                    int n = 0;
                    while(xisdigit(*info->p) && len < 3) {
                        n = n * 8 + *info->p - '0';
                        info->p++;
                        len++;
                    }
                    
                    value.append_char(n);
                }
                else if(*info->p == 'x' || *info->p == 'X') {
                    info->p++;
                    
                    char buf[128];
                    strncpy(buf, "0x", 128);
                    while(*info->p >= '0' && *info->p <= '9' || *info->p >= 'a' && *info->p <= 'f' || *info->p >= 'A' && *info->p <= 'F') {
                        char buf2[2];
                        buf2[0] = *info->p;
                        buf2[1] = '\0';
                        info->p++;
                        strncat(buf, buf2, 128);
                    }
                    
                    unsigned long lont int n = strtoll(buf, NULL, 0);
                    
                    value.append_char((char)n);
                }
                else {
                    switch(*info->p) {
                        case '0':
                            value.append_char('\0');
                            info->p++;
                            break;
    
                        case 'n':
                            value.append_char('\n');
                            info->p++;
                            break;
    
                        case 't':
                            value.append_char('\t');
                            info->p++;
                            break;
    
                        case 'r':
                            value.append_char('\r');
                            info->p++;
                            break;
    
                        case 'v':
                            value.append_char('\v');
                            info->p++;
                            break;
    
                        case 'f':
                            value.append_char('\f');
                            info->p++;
                            break;
    
                        case 'a':
                            value.append_char('\a');
                            info->p++;
                            break;
    
                        case 'b':
                            value.append_char('\b');
                            info->p++;
                            break;
    
                        case '\\':
                            value.append_char('\\');
                            info->p++;
                            break;
    
                        default:
                            value.append_char(*info->p);
                            info->p++;
                            break;
                    }
                }
            }
            else if(*info->p == '\0') {
                int sline2 = info->sline;
                info->sline = sline;
                err_msg(info, "close \" to make c string value");
                throw
            }
            else {
                if(*info->p == '\n') info->sline++;

                value.append_char(*info->p);
                info->p++;
            }
        }

        skip_spaces_and_lf(info);
        
        int len = value.len;
        
        wchar_t*% wstr = new wchar_t[len+1];
        
        char* str = value.buf;
        
        if(mbstowcs(wstr, str, len+1) < 0) {
            perror("mbstowcs");
            exit(1);
        }
        
        wstr[len] = '\0';

        return new sNode(new sWStringNode(wstr, sline, info));
    }
    else {
        inherit(info) throws;
    }
    
    return (sNode*%)null;
}
