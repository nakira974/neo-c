#include "common.h"

int gComeLang;

void come_init() version 2
{
    gComeLang = false;
}

void come_final() version 2
{
}

void err_msg(sInfo* info, char* str)
{
    if(!info.no_output_err) {
        fprintf(stderr, "%s %d: %s\n", info.sname, info.sline, str);
        info.err_num++;
    }
}

exception int parse(sInfo* info) version 2
{
    return 0;
}

exception int transpile(sInfo* info) version 2
{
    return 0;
}

exception int output_source_file(sInfo* info) version 2
{
    string output_file_name = xsprintf("%s.c", info.sname);
    
    /// dummy output ///
    string("int main(int argc, char** argv) { return 0; }\n").write(output_file_name);
    
    return 0;
}

static exception int compile(sInfo* info, bool output_object_file, list<string>* object_files)
{
    char* p = info.sname + strlen(info.sname);
    
    while(p >= info.sname) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p == info.sname) {
        err_msg(info, "invalid source file name. require suffix");
        throw
    }
    
    char output_file_name[PATH_MAX];
    memcpy(output_file_name, info.sname, p - info.sname);
    output_file_name[p - info.sname] = '\0'
    strncat(output_file_name, ".o", PATH_MAX);
    
    string input_file_name = xsprintf("%s.c", info.sname);
    
    var command = xsprintf("clang -o %s -c %s %s", output_file_name, input_file_name, info.clang_option);
    
    int rc = system(command);
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        throw;
    }
    
    if(!output_object_file) {
        object_files.push_back(string(output_file_name));
    }
    
    return 0;
}

static exception int linker(sInfo* info, list<string>* object_files)
{
    char* p = info.sname + strlen(info.sname);
    
    while(p >= info.sname) {
        if(*p == '.') {
            break;
        }
        else {
            p--;
        }
    }
    
    if(p == info.sname) {
        err_msg(info, "invalid source file name. require suffix");
        throw
    }
    
    char output_file_name[PATH_MAX];
    memcpy(output_file_name, info.sname, p - info.sname);
    output_file_name[p - info.sname] = '\0'
    
    var command = new buffer();
    
    command.append_str(xsprintf("clang -o %s %s ", output_file_name, info.clang_option));
    
    foreach(it, object_files) {
        command.append_str(xsprintf("%s ", it));
    }
    
    int rc = system(command.to_string());
    
    if(rc != 0) {
        err_msg(info, "clang is faield");
        throw;
    }
    
    return 0;
}

int come_main(int argc, char** argv) version 2
{
    var clang_option = new buffer();
    var files = new list<string>();
    var object_files = new list<string>();
    bool output_object_file = false;
    for(int i=1; i<argc; i++) {
        if(argv[i] === "-g") {
            clang_option.append_str("-g ");
        }
        else if(argv[i] === "-c") {
            output_object_file = true;
        }
        else if(argv[i][0] == '-') {
            clang_option.append_str(argv[i] + " ");
        }
        else if(memcmp(argv[i] + strlen(argv[i]) -2, ".o", 2) == 0) {
            object_files.push_back(string(argv[i]));
        }
        else {
            files.push_back(string(argv[i]));
        }
    }
    
    come_init();
    foreach(it, files) {
        sInfo info;
        
        info.p = it.read().to_buffer().to_pointer();
        info.head = info.p.p;
        info.sname = clone it;
        info.sline = 1;
        info.err_num = 0;
        info.clang_option = clang_option.to_string();
        info.no_output_err = false;
        info.funcs = new map<string, sFun*%>();
        info.module = new sModule();
        info.right_value_objects = new list<sRightValueObject*%>();
        info.stack = new list<LVALUE*%>();
        
        parse(&info).catch {
            fprintf(stderr, "%s %d: parse faield\n", info.sname, info.sline);
            exit(2);
        }
        
        transpile(&info).catch {
            fprintf(stderr, "%s %d: traspile faield\n", info.sname, info.sline);
            exit(2);
        }
        
        output_source_file(&info).catch {
            fprintf(stderr, "%s %d: output source file faield\n", info->sname, info->sline);
            exit(2);
        }
        
        compile(&info, output_object_file, object_files).catch {
            fprintf(stderr, "%s %d: compile faield\n", info.sname, info.sline);
        }
    }
    
    if(!output_object_file && files.length() > 0) {
        sInfo info;
        
        info.sname = clone files[0];
        info.clang_option = clang_option.to_string();
        
        linker(&info, object_files).catch {
            fprintf(stderr, "%s %d: linker faield\n", info.sname, info.sline);
        }
    }
    
    come_final();
    
    return 0;
}
