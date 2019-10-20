#ifndef UTFSTR_HPP
#define UTFSTR_HPP

#include <cstdio>
#include <cwchar>
#include <cstring>

class utfstr {
private:

	static unsigned char state_map[7][256];

public:

	static long long unsigned length(const char* src);
	static long long unsigned length(const char16_t* src);

	static char16_t* copy(char16_t* dst, const char*     src);
	static char*     copy(char*     dst, const char16_t* src);
	static char16_t* copy(char16_t* dst, const wchar_t*  src);
	static wchar_t*  copy(wchar_t*  dst, const char16_t* src);

	static void print(const char16_t* src);
	static void  puts(const char16_t* src);

	static void print(FILE* file, const char16_t* src);
	static void  puts(FILE* file, const char16_t* src);

};

#endif