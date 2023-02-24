#include <stdio.h>
#include "main.h"

/**
 * is_leap_year - takes leap year
 * @year: year
 * Return: void
 */

int is_leap_year(int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * print_remaining_days - prints days
 * @month: this is the month
 * @day: this is th day
 * @year: this is the year
 */

void print_remaining_days(int month, int day, int year)
{
	if (month >= 2 && day >= 60)
	{
		day++;
	}
	{
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day);
	}
}
