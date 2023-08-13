#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */
int main(void)
{
	int hexa;

	for (hexa = 0; hexa < 16; hexa++)
	{
		if (hexa < 10)
		{
			putchar(hexa + '0');
		}
		else
		{
			putchar('a' + (hexa - 10));
		}
	}

		putchar('\n');
		return (0);
}
