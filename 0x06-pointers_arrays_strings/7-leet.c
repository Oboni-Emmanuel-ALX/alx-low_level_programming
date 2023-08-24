#include "main.h"
/**
 * leet - function that encode 1337
 * @strr: pointer
 * Return: new_strr
 */

char *leet(char *strr)
{
	int i1 = 0;
	int i2 = 0;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (strr[++i1])
	{
		for (; i2 <= 7; i2++)
		{
			if (strr[i1] == leet[i2] || str[i1] - 32 == leet[i2])
				strr[i1] = i2 + '0';
		}
	}
	return (strr);
}
