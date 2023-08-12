#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	/* set variable 'alphabet' to 'a'*/
	char alphabet = 'a';
	/* print alphabets in lower case*/
	for (; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
