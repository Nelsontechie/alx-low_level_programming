#include "main.h"
/**
 * print_numbers - the function
 */

void print_numbers(void)
{
	char nums[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '\n'};
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(nums[i]);
	}
}
