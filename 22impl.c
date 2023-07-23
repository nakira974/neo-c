#include "common.h"

exception sNode*% top_level(char* buf, char* head, int head_sline, sInfo* info) version 93
{
    if(buf === "impl") {
        var word = parse_word(info).catch {
            throw
        }
        
        if(*info->p == '<') {
            info->p++;
            skip_spaces_and_lf(info);
            
            info.generics_type_names.reset();
            while(true) {
                var generics_name = parse_word(info).catch {
                    throw
                }
                info.generics_type_names.push_back(generics_name);
                
                if(*info->p == ',') {
                    info->p++;
                    skip_spaces_and_lf(info);
                }
                else if(*info->p == '>') {
                    info->p++;
                    skip_spaces_and_lf(info);
                    break;
                }
                else {
                    err_msg(info, "invalid character on impl (%c)", *info->p);
                    throw;
                }
            }
        }
        
        int pointer_num = 0;
        while(*info->p == '*') {
            info->p++;
            skip_spaces_and_lf(info);
            pointer_num++;
        }
        
        expected_next_character('{', info);
        
        info->impl_type = new sType(word, info);
        info->impl_type->mPointerNum = pointer_num;
        
        while(*info->p != '}') {
            parse_sharp(info);
            
            char* head = info.p.p;
            string buf = parse_word(info).catch {
                throw;
            }
            
            parse_sharp(info);
            
            sNode*% node = top_level(buf, head, head_sline, info).catch {
                throw;
            }
            parse_sharp(info);
            
            while(*info->p == ';') {
                info->p++;
                skip_spaces_and_lf(info);
            }
            parse_sharp(info);
            
            if(node != null) {
                if(!node.compile->(info)) {
                    throw;
                }
            }
            parse_sharp(info);
            
            skip_spaces_and_lf(info);
        }
        
        expected_next_character('}', info);
        info.generics_type_names.reset();
        info->impl_type = null;
        
        return (sNode*)null;
    }
    
    return inherit(buf, head, head_sline, info).catch {
        throw;
    }
}
