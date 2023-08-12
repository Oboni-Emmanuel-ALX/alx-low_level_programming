#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Succeess)
 */
int main(void)
{
	/* set variable 'alphabet' to 'a'*/
	char lower_alphabet = 'a';
	char upper_alphabet = 'A';

	/* print alphabets in lower case*/
	for (; lower_alphabet <= 'z'; lower_alphabet++)
	{
		putchar(lower_alphabet);
	}
		for (; upper_alphabet <= 'Z'; upper_alphabet++)
		{
			putchar(upper_alphabet);
		}
	putchar('\n');
	return (0);
}
