#include "utfstr.hpp"
#include <cstring>
#include <cstdio>
#include <locale>
#include <cwchar>
#include <cuchar>

int main() {

	setlocale(LC_ALL, "");
	
	char16_t s16[] = {0xcccc, 0};
	char s8[100];
	wchar_t ws[100];

	utfstr::puts(s16);

	utfstr::copy(ws, s16);
	printf("%ls\n", ws);
	
}