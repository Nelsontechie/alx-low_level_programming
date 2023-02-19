#include <stdio.h>
#include <unistd.h>
/**
 * main - this carries the function
 *
 * Return: successful when it reads 0
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
