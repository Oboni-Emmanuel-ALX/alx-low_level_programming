#include "main.h"

/**
 * _isupper - Entry point for function
 * @c: Parameter to be printed
 * Return: 0 or 1 (Success)
 */
int _isupper(int c)
{
	/*check if character is uppercase letter */
	if (c >= 'A' && c <= 'Z')
	{
		return (1); /* return 1 if uppercase */
	}
	else
		return (0); /* otherwise return 0 */
}
