#include "main.h"
/**
 * swap_int - swaps integers
 * @a: first variable
 * @b: second variable
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
