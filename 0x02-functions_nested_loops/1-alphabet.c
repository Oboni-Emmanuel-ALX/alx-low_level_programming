#include "main.h"

/**
 * print_alphabet - print alphabet in lowercase
 *
 */
void print_alphabet(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
		_putchar('\n');
}
