#include "main.h"

/**
 * puts2 - Entry point for function that prints other character
 * @str: pointer for string character
 */
void puts2(char *str)
{
	int  len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
		{
			_putchar(str[len]);
		}
		len++;
	}
	_putchar('\n');
}
