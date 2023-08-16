#include "main.h"

/**
 * print_last_digit - Entry point for function
 * @num: The parameter to be printed
 * Return: The value of the last digit
 */
int print_last_digit(int num)
{
	int ld = num % 10;

	_putchar('0' + ld);
	return (ld);
}
