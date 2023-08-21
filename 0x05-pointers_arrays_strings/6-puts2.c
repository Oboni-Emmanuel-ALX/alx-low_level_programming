#include "main.h"

/**
 * puts2 - Entry point for function that prints other character
 * @str: pointer for string character
 */
void puts2(char *str)
{
	int  i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 2;
	}
	_putchar('\n');
}
