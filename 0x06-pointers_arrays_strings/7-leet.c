#include "main.h"
#include "_putchar.c"
/**
 * leet - the function
 * @str: string
 * Return: returns string
 */

char leet(char *str)
{
	char *p = str;
	char leet_chars[] = {'4', '3', '0', '7', '1'};
	char regular_chars[] = {'a', 'e', 'o', 't', 'l'};
	int i, j;

	while (*p != '\0')
	{
		i = 0;
		while (i < 5)
		{
			if (*p == regular_chars[i] ||
			  *p == regular_chars[i] - 'a' + 'A')
			{
				j = i;
				*p = leet_chars[j];
				break;
			}
			i++;
		}
		p++;
	}
	return (str);
}
