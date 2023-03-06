#include "main.h"
/**
 * _strchr - the main function
 * @s: the first variable
 * @c: the second vriable
 * Return: returns s or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
