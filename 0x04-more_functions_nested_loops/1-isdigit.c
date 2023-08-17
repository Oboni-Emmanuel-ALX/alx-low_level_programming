#include "main.h"

/**
 * _isdigit - function entry point
 * @c: Parameter to be printed
 *
 * Return: 0 or 1 (Success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1); /* returns 1 if c is a digit */
	}
	else
	{
		return (0); /* otherwise 0 */
	}
}
