#include "main.h"
/**
 * times_table - Entry point
 */
void times_table(void)
{
	int i;
	int j;
	int product;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			product = i * j;
			if (j == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product >= 10)
				{
					_putchar(product / 10 + '0');
				}
				else
				{
					_putchar(' ');
				}

				_putchar(product % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
