#include "main.h"

/**
 * print_numbers - Entry point for function
 *
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0' + num);
	}
	_putchar('\n');
}
