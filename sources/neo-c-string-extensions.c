#include "/neo-c.h"


char* char*::delete(char* str, int head, int tail)
{
    int len = strlen(str);

    if(strcmp(str, "") == 0) {
        return str;
    }

    if(head < 0) {
       head += len;
    }

    if(tail < 0) {
       tail += len + 1;
    }

    if(head < 0) {
        head = 0;
    }

    if(tail < 0) {
        return str;
    }

    if(tail >= len) {
        tail = len;
    }

    string sub_str = str.substring(tail, -1);

    memcpy(str + head, sub_str, sub_str.length()+1);

    return str;
}

wstring wchar_t*::substring(wchar_t* str, int head, int tail)
{
    if(str == null) {
        return wstring("");
    }

    int len = wcslen(str);

    if(head < 0) {
        head += len;
    }
    if(tail < 0) {
        tail += len + 1;
    }

    if(head > tail) {
        return wstring("");
    }

    if(head < 0) {
        head = 0;
    }

    if(tail >= len) {
        tail = len;
    }

    if(head == tail) {
        return wstring("");
    }

    if(tail-head+1 < 1) {
        return wstring("");
    }

    wstring result = new wchar_t[tail-head+1];

    memcpy(result, str + head, sizeof(wchar_t)*(tail-head));
    result[tail-head] = '\0';

    return result;
}

wstring wstring(char* str)
{
    int len = strlen(str);

    wstring wstr = new wchar_t[len+1];

    int ret = mbstowcs(wstr, str, len+1);
    wstr[ret] = '\0';

    if(ret < 0) {
        wstr[0] = 0;
    }

    return wstr;
}

int char*::index_count(char* str, char* search_str, int count, int default_value)
{
    int n = 0;
    int len = strlen(str);
    for(int i=0; i<len; i++) {
        int len2 = strlen(search_str);
        int j;
        for(j=0; j<len2; j++) {
            if(str[i+j] != search_str[j]) {
                break;
            }
        }

        if(j == len2) {
            n++;

            if(n == count) {
                return i;
            }
        }
    }

    return default_value;
}

string char*::sub_block_count(char* self, regex_struct* reg, int count, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
    int offset = 0;

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    auto result = new buffer.initialize();

    int n = 0;

    while(true) {
    int options = PCRE_NEWLINE_LF;
    int len = strlen(self);
    int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

    for(int i=0; i<ovec_max; i++) {
        start[i] = ovec_value[i*2];
    }
    for(int i=0; i<ovec_max; i++) {
        end[i] = ovec_value[i*2+1];
    }

    /// match and no group strings ///
    if(regex_result == 1) {
        n++;
        string str = self.substring(offset, start[0]);

        result.append_str(str);

        list<string>*% group_strings = new list<string>.initialize();

        group_strings.push_back(self.substring(start[0], end[0]));

        string match_string = self.substring(start[0], end[0]);

        string block_result = block(parent, match_string, group_strings);
        result.append_str(block_result);

        if(offset == end[0]) {
            offset++;
        }
        else {
            offset = end[0];
        }

        if(!reg.global) {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }

        if(n == count) {
            string str = self.substring(offset, -1);
            result.append_str(str);
            break;
        }

    }
        /// group strings ///
        else if(regex_result > 1) {
        n ++;

        string str = self.substring(offset, start[0]);
        result.append_str(str);

        if(offset == end[0]) {
        offset++;
        }
        else {
        offset = end[0];
        }

        list<string>*% group_strings = new list<string>.initialize();

        for(int i = 1; i<regex_result; i++) {
        auto match_string = self.substring(start[i], end[i]);
        group_strings.push_back(match_string);
        }

        string match_string = self.substring(start[0], end[0]);

        string block_result = block(parent, match_string, group_strings);
        result.append_str(block_result);

        if(!reg.global) {
        string str = self.substring(offset, -1);
        result.append_str(str);
        break;
        }

        if(n == count) {
        string str = self.substring(offset, -1);
        result.append_str(str);
        break;
        }
        }
        /// no match ///
        else {
        string str = self.substring(offset, -1);
        result.append_str(str);
        break;
        }
    }

    return result.to_string();
}
string char*::sub_block(char* self, regex_struct* reg, void* parent, string (*block)(void* parent, char* match_string, list<string>* group_strings))
{
int offset = 0;

int ovec_max = 16;
int start[ovec_max];
int end[ovec_max];
int ovec_value[ovec_max * 3];

const char* err;
int erro_ofs;

int options = reg.options;
char* str = reg.str;

pcre* re = reg.re;

auto result = new buffer.initialize();

while(true) {
int options = PCRE_NEWLINE_LF;
int len = strlen(self);
int regex_result = pcre_exec(re, (pcre_extra*)0, self, len, offset, options, ovec_value, ovec_max*3);

for(int i=0; i<ovec_max; i++) {
start[i] = ovec_value[i*2];
}
for(int i=0; i<ovec_max; i++) {
end[i] = ovec_value[i*2+1];
}

/// match and no group strings ///
if(regex_result == 1) {
string str = self.substring(offset, start[0]);

result.append_str(str);

list<string>*% group_strings = new list<string>.initialize();

string match_string = self.substring(start[0], end[0]);

group_strings.push_back(self.substring(start[0], end[0]));

string block_result = block(parent, match_string, group_strings);
result.append_str(block_result);

if(offset == end[0]) {
offset++;
}
else {
offset = end[0];
}

if(!reg.global) {
string str = self.substring(offset, -1);
result.append_str(str);
break;
}
}
/// group strings ///
else if(regex_result > 1) {
string str = self.substring(offset, start[0]);
result.append_str(str);

if(offset == end[0]) {
offset++;
}
else {
offset = end[0];
}

list<string>*% group_strings = new list<string>.initialize();

for(int i = 1; i<regex_result; i++) {
auto match_string = self.substring(start[i], end[i]);
group_strings.push_back(match_string);
}

string match_string = self.substring(start[0], end[0]);

string block_result = block(parent, match_string, group_strings);
result.append_str(block_result);

if(!reg.global) {
string str = self.substring(offset, -1);
result.append_str(str);
break;
}
}
/// no match ///
else {
string str = self.substring(offset, -1);
result.append_str(str);
break;
}
}
return result.to_string();
}



