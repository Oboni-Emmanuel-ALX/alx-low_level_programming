#include "main.h"

/**
 * _strcmp - Entry point for function that compares two strings
 * @s1: first pointer
 * @s2: second pointer
 * Return: (*s1 - *s2)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' &&  *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);

}
