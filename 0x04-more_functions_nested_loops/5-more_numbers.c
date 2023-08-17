#include "main.h"

/**
 * more_numbers - Entry point for function
 *
 */
void more_numbers(void)
{
	int counter = 0;

	while (counter < 10)
	{
		int i = 0;
		for (; i <= 14; i++)
		{
			if (i > 9)
			{
			_putchar(i / 10 + '0');
			}
				_putchar(i % 10 + '0');
		}
		_putchar('\n');
		counter++;
	}
}
