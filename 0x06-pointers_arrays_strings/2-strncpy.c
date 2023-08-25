#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination pointer
 * @src: source pointer
 * @n: parameter n
 * Return: initial_d
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *initial_d = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	/* if remaining space, fill with null */
	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}
	return (initial_d);
}
