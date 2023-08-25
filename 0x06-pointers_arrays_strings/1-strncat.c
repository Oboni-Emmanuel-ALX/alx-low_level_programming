#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: first pointer
 * @src: second pointer
 * @n: variable
 * Return: initialDest
 */
char *_strncat(char *dest, char *src, int n)
{
	/* store the original value of dest */
	char *initialDest = dest;

	/* move the desk pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}
	/* Append characters from src to dest ... */
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* add a terminating null byte */
	*dest = '\0';
	/* return the pointer to the begining ..*/
	return (initialDest);
}
