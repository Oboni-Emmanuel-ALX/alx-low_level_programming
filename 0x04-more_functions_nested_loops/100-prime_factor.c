#include <stdio.h>

/**
 * main - Entry point for main function
 * largest_prime_factor - Entry point largest ... function
 * @num: placeholder for parameter
 * Return: Always 0 (Success)
 */

long largest_prime_factor(long num);

int main(void)
{
	long number = 612852475143;

	long ans = largest_prime_factor(number);

	printf("%1ld\n", ans);
		return (0);
}

/**
 * largest_prime_factor - Entry point for function
 * @num: parameter to be printed
 * Return: Always 0 (Success)
 */
long largest_prime_factor(long num)
{
	long i = 2;

	while (i * i <= num)
	{
		if (num % i != 0)
		{
			i++;
		}
		else
		{
			num /= i;
		}
	}
	return (num);
}

