/**
 * reverse_array - reverse the content of na array
 * @a: array pointer
 * @n: number of items in array
 */
void reverse_array(int *a, int n)
{
	int i;
	int x;

	for (i = 0, x = n - 1; i < x; i++, x--)
	{
		/* interchange items at position i and x */
		int swapv = a[i];

		a[i] = a[x];
		a[x] = swapv;
	}
}
