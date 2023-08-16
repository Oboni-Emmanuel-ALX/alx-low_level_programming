#include "main.h"

/**
 * _abs - Entry point for function
 * @x: The parameter to be printed
 * Return: Alway 0 (Success)
 */
int _abs(int x)
{
	if (x >= 0)
	{
		return (x);
	}
	else if (x < 0)
	{
		return (-x);
	}
	return (0);
}
