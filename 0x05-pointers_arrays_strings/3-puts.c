#include "main.h"
/**
 * _puts - the main function
 * @str: the variable
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
