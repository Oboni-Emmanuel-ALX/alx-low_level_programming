#include "main.h"

/**
 * print_triangle - Entry point for function
 *
 * @size: parameter of size
 */
void print_triangle(int size)
{
	int i;
	int x;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		int j;

		for (j = 1; j <= size - i; j++)
		{
			_putchar(' ');
		}
		for (x = 1; x <= i; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
