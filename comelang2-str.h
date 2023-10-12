#ifndef COMELANG2_STR_H
#define COMELANG2_STR_H

#include <pcre.h>
#include <wchar.h>

typedef wchar_t*% wstring;

struct come_regex
{
    string str;
    pcre* regex;

    bool ignore_case;
    bool multiline;
    bool global;
    bool extended;
    bool dotall;
    bool anchored;
    bool dollar_endonly;
    bool ungreedy;

    int options;

    pcre* re;
};

come_regex*% come_regex*::initialize(come_regex*% self, char* str, bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
come_regex*% char*::to_regex(bool ignore_case=false, bool multiline=false, bool global=false, bool extended=false, bool dotall=false, bool anchored=false, bool dollar_endonly=false, bool ungreedy=false);
void come_regex*::finalize(come_regex* reg);
come_regex*% come_regex*::clone(come_regex* reg);

string string::chomp(char* str);

string come_regex*::to_string(come_regex* regex);
string string::lower_case(char* str);
string string::upper_case(char* str);
string char*::delete(char* str, int head, int tail) ;
wstring wchar_t*::substring(wchar_t* str, int head, int tail);

int char*::index_count(char* str, char* search_str, int count, int default_value);
int char*::index_regex_count(char* self, come_regex* reg, int count, int default_value);
int char*::rindex(char* str, char* search_str, int default_value);
int char*::rindex_regex(char* self, come_regex* reg, int default_value);
int char*::rindex_count(char* str, char* search_str, int count, int default_value);
list<string>*% string::scan_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
list<string>*% char*::scan_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
list<string>*% char*::split_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
list<string>*% char*::split_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
bool come_regex*::equals(come_regex* left, come_regex* right);
list<string>*% char*::scan_group_strings(char* self, come_regex* reg, list<string>* group_strings, int* num_group_string_in_regex);
string char*::strip(char* self);
string char*::printable(char* str);
string wchar_t*::to_string(wchar_t* wstr);
wstring char*::to_wstring(char* str);
int wchar_t*::length(wchar_t* str);
int wstring::length(wchar_t* str);
wstring wchar_t*::delete(wchar_t* str, int head, int tail) ;
int wchar_t*::index(wchar_t* str, wchar_t* search_str, int default_value);
int wchar_t*::rindex(wchar_t* str, wchar_t* search_str, int default_value);
wstring wchar_t*::reverse(wchar_t* str);
wstring wchar_t*::multiply(wchar_t* str, int n);
wstring wchar_t*::printable(wchar_t* str);
bool char*::match_group_strings(char* self, come_regex* reg, int count, list<string>* group_strings);
bool wchar_t*::comapre(wchar_t* left, wchar_t* right);
unsigned int wchar_t::get_hash_key(wchar_t value);
bool wchar_t::equals(wchar_t left, wchar_t right);
string char*::operator_mult(char* str, int n);
string string::operator_mult(char* str, int n);
wstring wchar_t*::operator_mult(wchar_t* str, int n);
wstring wstring::operator_mult(wchar_t* str, int n);
bool wchar_t*::operator_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_equals(wchar_t* left, wchar_t* right);
bool wchar_t*::operator_not_equals(wchar_t* left, wchar_t* right);
bool wstring::operator_not_equals(wchar_t* left, wchar_t* right);
wstring wchar_t*::operator_add(wchar_t* left, wchar_t* right);
wstring wstring::operator_add(wchar_t* left, wchar_t* right);
int char*::index(char* str, char* search_str, int default_value);
int char*::index_regex(char* self, come_regex* reg, int default_value);
string char*::replace(char* self, int index, char c);
string char*::multiply(char* str, int n);
string char*::sub(char* self, come_regex* reg, char* replace);
string char*::sub_count(char* self, come_regex* reg, char* replace, int count);
list<string>*% char*::split_str(char* self, char* str);
list<string>*% char*::split_char(char* self, char c);
list<string>*% char*::scan(char* self, come_regex* reg);
list<string>*% char*::split(char* self, come_regex* reg);
bool char*::match(char* self, come_regex* reg);
list<string>*% char*::split_maxsplit(char* self, come_regex* reg, int maxsplit);
int char*::rindex_regex_count(char* self, come_regex* reg, int count, int default_value);
bool char*::match_count(char* self, come_regex* reg, int count);
string char*::sub_block(char* self, come_regex* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
string char*::sub_block_count(char* self, come_regex* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings));
int wchar_t*::compare(wchar_t* left, wchar_t* right);
int wstring::compare(wchar_t* left, wchar_t* right);
unsigned int wchar_t*::get_hash_key(wchar_t* value);
unsigned int wstring::get_hash_key(wchar_t* value);
bool wchar_t*::equals(wchar_t* left, wchar_t* right);
bool wstring::equals(wchar_t* left, wchar_t* right);
bool come_regex*::operator_not_equals(come_regex* left, come_regex* right);
bool come_regex*::operator_equals(come_regex* left, come_regex* right);
wstring string::to_wstring(char* str);
wstring char*::to_wstring(char* str);
string __builtin_wstring(char* str);

#endif
