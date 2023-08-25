#include "main.h"

/**
 * print_number - print an integer function
 * @n: number to be printed
 */
void print_number(int n)
{
	int d = 1;
	int tv = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (tv > 9)
	{
		tv /= 10;
		d *= 10;
	}
	while (d > 0)
	{
		_putchar((n / d) + '0');
		n %= d;
		d /= 10;
	}
}
