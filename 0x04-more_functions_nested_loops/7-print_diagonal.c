#include "main.h"

/**
 * print_diagonal - Entry point for function
 * @n: placeholder for number of lines
 *
 */
void print_diagonal(int n)
{
	int i;
	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i < n; i++)
	{
		int y;
		for (y = 0; y < i; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
