#ifndef UTF16_H
#define UTF16_H

class utf16 {
private:

	static unsigned char state_map[7][256];

public:

	static long long unsigned utf8_length(const char* src);
	static wchar_t* parse_utf8(wchar_t dst[], const char* src);

};

#endif