#include "main.h"
/**
 * leet - function that encode 1337
 * @strr: pointer
 * Return: new_strr
 */

char *leet(char *strr)
{
	int i;

	for (i = 0; strr[i]; i++)
	{
		if (strr[i] == 'a' || strr[i] == 'A')
		{
			strr[i] = '4';
		}
		else if (strr[i] == 'e' || strr[i] == 'E')
		{
			strr[i] = '3';
		}
		else if (strr[i] == 'o' || strr[i] == 'O')
		{
			strr[i] = '0';
		}
		else if (strr[i] == 't' || strr[i] == 'T')
		{
			strr[i] = '7';
		}
		else if (strr[i] == 'l' || strr[i] == 'L')
		{
			strr[i] = '1';
		}
		else
		{
			strr[i] = strr[i];
		}
	}
	return (strr);
}
