#include "main.h"
/**
 * is_palindrome - the main function
 * @s: the variable
 * Return: return value
 */

int is_palindrome(char *s)
{
	int i = 0, j = 0;

	if (s[j] == '\0')
	{
		return (1);
	}
	j++;
	if (is_palindrome(s))
	{
		if (s[i] == s[j])
		{
			i++;
			return (1);
		}
	}
	return (0);
}
