#include "main.h"

/**
 * puts_half - Entry point for function
 * @str: parameter to be rpinted
 */
void puts_half(char *str)
{
	int len = 0;
	int sIndex;
	int i;

	while (str[len] != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		sIndex = len / 2;
	}
	else
	{
		sIndex = (len - 1) / 2;
	}
	for (i = sIndex; str[i] != '\0'; i++)
	{
		if (str[i] == '\n')
		{
		_putchar(str[i]);
		while (str[i + 1] == '\n')
		{
			i++;

		}
		}
		else
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
