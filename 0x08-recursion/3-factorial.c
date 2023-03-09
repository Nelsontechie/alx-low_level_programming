#include "main.h"
/**
 * factorial - the main function to find the factorial
 * @n: the variable
 * Return: the return value
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
