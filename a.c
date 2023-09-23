#include "common.h"

void sVarTable*::finalize(sVarTable* self)
{
    delete borrow self.mVars;
}

void err_msg(sInfo* info, char* msg, ...)
{
    if(!info.no_output_err) {
        char msg2[COME_CODE_MAX];
    
        va_list args;
        va_start(args, msg);
        vsnprintf(msg2, COME_CODE_MAX, msg, args);
        va_end(args);
        
        fprintf(stderr, "%s %d: %s\n", info.sname, info.sline, msg2);
        info.err_num++;
    }
}

void skip_spaces_and_lf(sInfo* info)
{
    while(true) {
        if(*info->p == ' ' || *info->p == '\t') {
            info->p++;
        }
        else if(*info->p == '\n') {
            info->p++;
            info->sline++;
        }
        else {
            break;
        }
    }
}

string parse_word(sInfo* info)
{
    var buf = new buffer();
    
    while((*info->p >= 'a' && *info->p <= 'z') || (*info->p >= 'A' && *info->p <= 'Z') || *info->p == '_' || (*info->p >= '0' && *info->p <= '9') || (*info->p == '$'))
    {
        buf.append_char(*info->p);
        info->p++;
    }
    skip_spaces_and_lf(info);
    
    if(buf.to_string().length() == 0) {
        err_msg(info, "unexpected character(%c). expected word character", *info->p);
        exit(2);
    }
    
    return buf.to_string();
}

int main(int argc, char** argv)
{
    sInfo info;
    info.p = "ABC";
    
    string label;
    
    if(false && xisalpha(*info.p) || *info.p == '_') {
        label = parse_word(&info);
    }
    else {
        label = null;
    }
    
    tuple2<string, int>*% = new tuple2<string, int>(label, 1);
    
    
    return 0;
}
