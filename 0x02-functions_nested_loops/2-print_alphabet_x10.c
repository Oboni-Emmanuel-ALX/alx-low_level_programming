#include "main.h"
/**
 * print_alphabet_x10 - pirnt 10 lines of lower case alphabets
 */
void print_alphabet_x10(void)
{
	int i = 0;

		while (i < 10)
		{
			char x10_alpha = 'a';

			for (; x10_alpha <= 'z'; x10_alpha++)
			{
				_putchar(x10_alpha);
			}

			_putchar('\n');
			i++;
		}
}
