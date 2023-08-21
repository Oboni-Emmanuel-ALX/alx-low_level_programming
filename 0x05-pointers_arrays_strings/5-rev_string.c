#include "main.h"

/**
 * rev_string - reverse string
 * @s: the input string
 */
void rev_string(char *s)
{
	int len = 0;
	char t;
	int i;
	int j;

	/* cal. length of string */
	while (s[len] != '\0')
	{
		len++;
	}
	/* Swap char. from begining and end towards the center */
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
