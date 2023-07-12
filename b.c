#include <comelang.h>
#include <comelang.h>

struct sType
{
    string mName;
};

exception list<sType*%>*%, list<string>*%, bool parse_params()
{
    throw
    return (new list<sType*%>(), new list<string>(), false);
}

int main(int argc, char** argv)
{
    var param_types, param_names, var_args = parse_params().catch {
        return 1;
    }
    
    return 0;
}
