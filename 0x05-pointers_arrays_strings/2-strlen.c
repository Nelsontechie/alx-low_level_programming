#include "main.h"
/**
 * _strlen - lengthrns string
 * @s: the variable
 * Return: return value
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
