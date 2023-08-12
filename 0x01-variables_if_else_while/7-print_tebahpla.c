#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	/* set variable 'alphabet' to 'z'*/
	char alphabet = 'z';
	/* print alphabets in lower case*/
	for (; alphabet >= 'a'; alphabet--)
	{
	putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
