#include <stdio.h>
#include <unistd.h>
/**
 * main - this is the main function
 *
 * Return: this is a constant 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
