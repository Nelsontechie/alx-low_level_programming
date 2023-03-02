#include "main.h"
/**
 * string_toupper - changes strings to upper
 * @str: this is the variable
 * Return: return value
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
