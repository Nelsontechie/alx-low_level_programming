#include "main.h"

/**
 * _islower - prints the lower alphabet
 *
 * @c: this is the integer
 *
 * Return: value is either 1 or 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
