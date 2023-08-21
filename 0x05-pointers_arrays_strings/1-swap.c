#include "main.h"

/**
 * swap_int - function for parameter to be reset
 * @a: first integer
 * @b: Second integer
 */
void swap_int(int *a, int *b)
{
	int _3rdnum;

	_3rdnum = *a;
	*a = *b;
	*b = _3rdnum;
}
