#include "main.h"

/**
 * _isalpha - Entry point for function
 * @c: The parameter that will be printed
 * Return: 1 0r 0.
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);

}
