#include "main.h"

/**
 * print_rev - Function to print string in reverse followed by \n.
 *
 * @s: pointer to the string value.
 */
void print_rev(char *s)
{
	int len = 0;
	int count;

	/* calculate lenght of string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* print string in reverse */
	for (count = len - 1; count >= 0; count--)
	{
		_putchar(s[count]);
	}
	_putchar('\n');
}
