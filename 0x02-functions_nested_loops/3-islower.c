#include "main.h"

/**
 * _islower - Entry point for function
 * @c: The character to print
 *
 * Return: 0 0r 1.
 */
int _islower(int c)
{
	/* ASCII: range of 97 ('a') to 122 ('z') */
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
