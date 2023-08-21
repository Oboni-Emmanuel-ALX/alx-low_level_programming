#include "main.h"

/**
 * _puts - function for parameter to be reset
 * @str: pointer to input string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
