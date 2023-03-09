#ifndef MAIN_H
#define MAIN_H
#include <math.h>
#include <stdio.h>
extern int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int _sqrt_helper(int n, int low, int high);
int is_prime_number(int n);
#endif