#include "main.h"

/**
 * print_square - Entry point
 * @size: placeholder for size
 */
void print_square(int size)
{
	int count;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (count = 0; count < size; count++)
	{
		int x;

		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
