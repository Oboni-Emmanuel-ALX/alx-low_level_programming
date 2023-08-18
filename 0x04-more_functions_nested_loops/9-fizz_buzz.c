#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for main function
 * _fizz_buzz -  Entry point for function
 * Return: Always 0 (Success)
 */

int main(void)
{
	_fizz_buzz();
	return (0);
}

/* Fizz-Buzz test function */
void _fizz_buzz(void)
{
	int fb;

		for (fb = 1; fb <= 100; fb++)
		{
			if (fb % 3 == 0 && fb % 5 == 0)
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
}
