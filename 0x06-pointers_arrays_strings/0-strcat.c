#include "main.h"

/**
 * _strcat - Entry point for function that concatenates two strings
 * @dest: first pointer variable
 * @src: Second pointer variable
 */
char *_strcat(char *dest, char *src)
{
	/* Store original values of dest */
	char *initialDest = dest;

	/* move the dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* append character from src to dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	/* add a terminating null byte */
	*dest = '\0';
	/* return the pointer to the beginning of the concatenating string */
	return (initialDest);
}
