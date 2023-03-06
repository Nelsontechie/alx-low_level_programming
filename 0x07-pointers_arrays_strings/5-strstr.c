#include "main.h"
/**
 * _strstr - the main function
 * @haystack: the first pointyer
 * @needle: the second pointer
 * Return: returns null
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
		while (*haystack != '\0')
		{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
