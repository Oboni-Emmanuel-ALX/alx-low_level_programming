#include "main.h"

/**
 * print_number - print an integer function
 * @n: number to be printed
 */
void print_number(int n)
{
	int d = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n / d >= 10)
	{
		d *= 10;
	}
	while (d > 0)
	{
		int dg = n / d;
		_putchar('0' + dg);
		n %= d;
		d /= 10;
	}
}
