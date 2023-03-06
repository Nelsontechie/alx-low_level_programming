#include "main.h"
/**
 * _strpbrk - the main function
 * @s: the first variable
 * @accept: the second variable
 * Return: returns null
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
