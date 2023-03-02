#include "main.h"
#include <unistd.h>
/**
 * leet - the function
 * @str: variable
 * Return: rerturn value
 */

char *leet(char *str)
{
	char *p = str;
	char map[128] = {0};

	map['a'] = map['A'] = '4';
	map['e'] = map['E'] = '3';
	map['o'] = map['O'] = '0';
	map['t'] = map['T'] = '7';
	map['l'] = map['L'] = '1';

	while (*p)

	{
		char c = map[(int)*p];

		_putchar(c ? c : *p);
		p++;
	}
	return (str);
}
