// StringReverser.cpp : Определяет экспортированные функции для приложения DLL.
//

#include "stdafx.h"
#include "export.h"


/** Function for string reverse.
* @param str - string for input and output
*/
void __stdcall reverse(char *str)
{
	int len = 0;
	while (str[len] != '\0') ++len;

	for (int i = 0; i < len / 2; i++)
	{
		str[i] = str[i] ^ str[len-i-1];
		str[len - i-1] = str[i] ^ str[len - i-1];
		str[i] = str[i] ^ str[len - i-1];
	}

	str[len] = '\0';
}

