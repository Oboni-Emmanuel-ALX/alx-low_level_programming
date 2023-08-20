#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: days of month
 * @year: year
 * Return: void
 */

void print_remaining_days(int month, int day, int year)
{
	int days_per_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
	int total_days;
	int i;


	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		days_per_month[2] = 29;
	}

	total_days = day;

	for (i = 1; i < month; i++)
	{
		total_days += days_per_month[i];
	}

	printf("Day of the year: %d\n", total_days);
	printf("Remaining days: %d\n", 365 - total_days);
}
