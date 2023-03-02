#include "main.h"
/**
 * _strcat - the main function
 * @dest: the first variable
 * @src: the second variable
 * Return: returns result
 */

char *_strcat(char *dest, char *src)
{
	char *result = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
