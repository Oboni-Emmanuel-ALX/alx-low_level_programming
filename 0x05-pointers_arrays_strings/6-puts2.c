#include "main.h"

/**
 * puts2 - Entry point for function that prints other character
 * @str: pointer for string character
 */
void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count += 2;
	}
	_putchar('\n');
}
