#include "main.h"
/**
 * _strcmp - this is the function
 * @s1: the firsty variable
 * @s2: the second variable
 * Return: return value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
