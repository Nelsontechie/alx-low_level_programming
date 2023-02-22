#include <stdio.h>

/**
 * main - this is the function
 *
 * Return: this is the retuen value
 */

int main(void)
{
	int i, n = 50;
	unsigned long long fib[50];

	fib[0] = 1;
	fib[1] = 2;

	for (i = 2; i < n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
		printf("%llu, ", fib[i]);
	}
	printf("%llu\n", fib[n - 1]);
	return (0);
}
