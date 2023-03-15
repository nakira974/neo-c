#include <neo-c.h>

int main(int argc, char** argv)
{
	puts("x1");
	list<wstring>*% a = new list<wstring>();
   puts("x2");

	a.push_back(wstring("AAA"));
	a.push_back(wstring("BBB"));
	puts("x3");

	list<wstring>*% b = clone a;
	puts("x4");

	b.push_back(wstring("CCC"));
	puts("x5");

	int it2 = 0;
	foreach(it, b.sublist(0,2)) {
		printf("%ls\n", it);
	}
	puts("x6");

    return 0;
}
