#include "main.h"

/**
 * print_number - Entry point for function
 * @n:parameter to be printed
 */
void print_number(int n)
{
	int rev = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
			return;
	}

	while (n > 0)
	{
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while (rev > 0)
	{
		_putchar(rev % 10 + '0');
			rev /= 10;
	}
}
