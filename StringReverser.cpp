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
	while (str[len] != '\0') len++;
	int l = 0; 
}

