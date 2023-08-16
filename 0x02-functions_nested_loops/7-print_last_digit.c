#include "main.h"

/**
 * print_last_digit - Entry point for function
 * @num: The parameter to be printed
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	if (ld < 0)
	{
		ld = -ld;
	}
	_putchar('0' + ld);
	return (ld);
}
