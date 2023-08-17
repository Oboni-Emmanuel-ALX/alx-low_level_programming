#include "main.h"

/**
 * print_most_numbers - Entry point for function
 *
 */
void print_most_numbers(void)
{
	int mnum;

	for (mnum = 0; mnum < 10; mnum++)
	{
		if (mnum != 2 && mnum != 4)
		{
			_putchar('0' + mnum);
		}
	}
	_putchar('\n');
}
