#include "main.h"
#include <stdio.h>
/**
 * print_array - Entry point for function
 * @a: pointer for a
 * @n: parameter
 */
void print_array(int *a, int n)
{
	int counter;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	for (counter = 0; counter < n - 1; counter++)
	{
		printf("%d, ", a[counter]);
	}
	/* print the last item with a newline */
	printf("%d\n", a[n - 1]);
}
