#include "main.h"
/**
 * _memset - the main function
 * @b: variable 1
 * @s: variable 2
 * @int: integer
 * Return: return value
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
