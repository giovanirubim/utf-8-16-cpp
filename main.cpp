#include "utfstr.hpp"
#include <cstring>
#include <iostream>
#include <cstdio>
#include <locale>
#include <cwchar>

int main() {

	setlocale(LC_ALL, "");
		
	char utf8str[] = {109, 97, (char)195, (char)167, (char)195, (char)163, 0};
	std::u16string str;
	utfstr::copy(str, utf8str);
	printf("[%ls]\n", str.c_str());

}