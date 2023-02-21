#include "main.h"

/**
 * _isalpha - prints the letter in alpha
 *
 * @c: this is the integer
 *
 * Return: value is either 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
