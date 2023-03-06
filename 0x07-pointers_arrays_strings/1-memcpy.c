#include "main.h"
/**
 * _memcpy - the main function
 * @dest: the first variable
 * @src: second variable
 * @n: third variable
 * Return: the return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp = dest;

	while (n--)
	{
		*temp++ = *src++;
	}
	return (dest);
}
