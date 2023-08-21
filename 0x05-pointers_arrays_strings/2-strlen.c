#include "main.h"

/**
 * _strlen - function for parameter to be reset
 * @s: pointer to input string
 * Return: length.
 */
int _strlen(char *s)
{
	int lent = 0;

	while (*s != '\0')
	{
		lent++;
		s++;
	}
	return (lent);
}
