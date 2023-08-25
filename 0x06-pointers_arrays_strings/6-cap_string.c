#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @strr: pointer
 * Return: strr.
 */
char *cap_string(char *strr)
{
	int indexx = 0;

	while (strr[indexx])
	{
		while (!(strr[indexx] >= 'a' && strr[indexx] <= 'z'))
			indexx++;

		if (strr[indexx - 1] == ' ' ||
		    strr[indexx - 1] == '\t' ||
		    strr[indexx - 1] == '\n' ||
		    strr[indexx - 1] == ',' ||
		    strr[indexx - 1] == ';' ||
		    strr[indexx - 1] == '.' ||
		    strr[indexx - 1] == '!' ||
		    strr[indexx - 1] == '?' ||
		    strr[indexx - 1] == '"' ||
		    strr[indexx - 1] == '(' ||
		    strr[indexx - 1] == ')' ||
		    strr[indexx - 1] == '{' ||
		    strr[indexx - 1] == '}' ||
		    indexx == 0)
			strr[indexx] -= 32;
		indexx++;
	}

	return (strr);
}
