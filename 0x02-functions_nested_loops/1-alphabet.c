#include "main.h"
/**
 * print_alphabet - this is the function that prints the alphabet
 *
 * Return: this is the main function
 */
void print_alphabet(void)
{
	for (char c = 'a'; c <= 'z'; c++)
	{
		_putchar("%c", c);
	}
	_putchar("\n");
}
/**
 * main - this is the main function
 *
 * Return: this is the retuen value
 */
int main(void)
{
	print_alphabet();
	return (0);
}
