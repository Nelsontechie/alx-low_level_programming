#include <unistd.h>
#include <stdio.h>
/**
 * main - this is the main function
 *
 * Return: this is a constant 0
 */
int main(void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
