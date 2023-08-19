#include "main.h"

/**
 * print_number - Entry point for function
 * @n:parameter to be printed
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		_putchar('0' + n / div);
		n %= div;
		div /= 10;
	}
}
