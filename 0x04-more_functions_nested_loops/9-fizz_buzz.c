#include <stdio.h>

/**
 * main - Entry point for main function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int fb;

		for (fb = 1; fb <= 100; fb++)
		{
			if (fb % 15 == 0)
			{
				printf("FizzBuzz ");
			}
			else if (fb % 5 == 0)
			{
				printf("Buzz ");
			}
			else if (fb % 3 == 0)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%d ", fb);
			}
		}
		printf("\n");
		return (0);
}
