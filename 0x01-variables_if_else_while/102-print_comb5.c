#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1;
	int d2;
	int c1;
	int c2;

	for (d1 = 0; d1 < 10; d1++)
	{
		for (d2 = 0; d2 < 10; d2++)
		{
			
			for (c1 = 0; c1 < 10; c1++)
			{
				
				for (c2 = c1 + 1; c2 < 10; c2++)
				{
					putchar(d1 + '0');
					putchar(c1 + '0');
					putchar(' ');
					putchar(d2 + '0');
					putchar(c2 + '0');
					if (!(d1 == 9 && d2 == 9 && c1 == 8 && c2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}	
	putchar('\n');
	return (0);
}
