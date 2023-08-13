#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s_num;

	for (s_num = 0; s_num < 10; s_num++)
	{
		putchar(s_num + '0');
		if (s_num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
