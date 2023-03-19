#include "neo-c.inl"

regex_struct*% regex(char* str, bool ignore_case, bool multiline, bool global, bool extended, bool dotall, bool anchored, bool dollar_endonly, bool ungreedy)
{
    auto result = new regex_struct;

    const char* err;
    int erro_ofs;

    int options = PCRE_UTF8 | (ignore_case ? PCRE_CASELESS:0) | (multiline ? PCRE_MULTILINE : 0) | (extended ? PCRE_EXTENDED :0) | (dotall ? PCRE_DOTALL :0) | (dollar_endonly ? PCRE_DOLLAR_ENDONLY:0) | (ungreedy ? PCRE_UNGREEDY:0);

    result.str = string(str);

    result.ignore_case = ignore_case;
    result.multiline = multiline;
    result.global = global;
    result.extended = extended;
    result.dotall = dotall;
    result.anchored = anchored;
    result.dollar_endonly = dollar_endonly;
    result.ungreedy;
    result.options = options;

    result.re = pcre_compile(str, options, &err, &erro_ofs, NULL);

    if(result.re == NULL) {
fprintf(stderr, "regex error (%s)\n", str);
        return NULL;
    }

    return result;
}

void regex_struct*::finalize(regex_struct* reg)
{
    if(reg && reg.str) {
        delete reg.str;
    }
    if(reg && reg.re) {
        free(reg.re);
    }
}

regex_struct*% regex_struct*::clone(regex_struct* reg)
{
    regex_struct*% result = new regex_struct;
    
    result.str = clone reg.str;

    result.ignore_case = reg.ignore_case;
    result.multiline = reg.multiline;
    result.global = reg.global;
    result.extended = reg.extended;
    result.dotall = reg.dotall;
    result.anchored = reg.anchored;
    result.dollar_endonly = reg.dollar_endonly;
    result.ungreedy = reg.ungreedy;

    result.options = reg.options;

    const char* err;
    int erro_ofs;

    result.re = pcre_compile(result.str, result.options, &err, &erro_ofs, NULL);

    if(result.re == NULL) {
        return NULL;
    }

    return result;
}

void nregex::finalize(regex_struct* reg)
{
    regex_struct_finalize(reg);
}

nregex nregex::clone(regex_struct* reg)
{
    return regex_struct_clone(reg);
}

unsigned int regex_struct*::get_hash_key(regex_struct* self)
{
return self.str.get_hash_key();
}

int char*::index_regex_count(char* self, regex_struct* reg, int count, int default_value)
{
    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;

    int offset = 0;

    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

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
        if(regex_result > 0) {
            n++;

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(n == count) {
                result = start[0];
                break;
            }
        }
            /// no match ///
        else {
            break;
        }
    }

    return result;
}

int char*::rindex(char* str, char* search_str, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            return p - str;
        }

        p--;
    }

    return default_value;
}

int char*::rindex_regex(char* self, regex_struct* reg, int default_value)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    string self2 = self.reverse();

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;

    int offset = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self2);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self2, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result == 1 || regex_result > 0)
        {
            result = strlen(self) -1 - start[0];
            break;
        }
        /// no match ///
        {
            break;
        }
    }

    return result;
}

int char*::rindex_count(char* str, char* search_str, int count, int default_value)
{
    int len = strlen(search_str);
    char* p = str + strlen(str) - len;

    int n = 0;

    while(p >= str) {
        if(strncmp(p, search_str, len) == 0) {
            n++;
            if(n == count) {
                return p - str;
            }
        }

        p--;
    }

    return default_value;
}

int char*::rindex_regex_count(char* self, regex_struct* reg, int count, int default_value)
{
    const char* err;
    int erro_ofs;

    int options = reg.options;
    char* str = reg.str;

    pcre* re = reg.re;

    string self2 = self.reverse();

    int ovec_max = 16;
    int start[ovec_max];
    int end[ovec_max];
    int ovec_value[ovec_max * 3];

    int result = default_value;

    int offset = 0;

    int n = 0;

    while(true) {
        int options = PCRE_NEWLINE_LF;
        int len = strlen(self2);
        int regex_result = pcre_exec(re, (pcre_extra*)0, self2, len, offset, options, ovec_value, ovec_max*3);

        for(int i=0; i<ovec_max; i++) {
            start[i] = ovec_value[i*2];
        }
        for(int i=0; i<ovec_max; i++) {
            end[i] = ovec_value[i*2+1];
        }

        /// match and no group strings ///
        if(regex_result > 0)
        {
            n++;

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }

            if(n == count) {
                result = strlen(self) - end[0];
                break;
            }
        }
            /// no match ///
        else
        {
            break;
        }
    }

    return result;
}

bool char*::match_count(char* self, regex_struct* reg, int count)
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
        if(regex_result > 0)
        {
            n++;

            if(count == n) {
                return true;
            }

            if(offset == end[0]) {
                offset++;
            }
            else {
                offset = end[0];
            }
        }
            /// no match ///
        else
        {
            return false;
        }
    }

    return false;
}


