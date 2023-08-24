#include "main.h"

/**
 * string_toupper - lowercase letters of a string to uppercase.
 * @strr: pointer
 * Return: strr
 */
char *string_toupper(char *strr)
{
	int i;

	for (i = 0; strr[i] != '\0'; i++)
	{
		if (strr[i] >= 'a' && strr[i] <= 'z')
		{
			strr[i] -= 32;
		}
	}
	return (strr);

}
