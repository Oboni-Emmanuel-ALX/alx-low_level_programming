#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generate random valid password
 * Return: Always 0.
 */
int main(void)
{
	char password[84];
	int indexx = 0, sum = 0;
	int dif_half1, dif_half2;

	srand(time(0));
	while (sum < 2772)
	{
		password[indexx] = 33 + rand() % 94;
		sum += password[indexx++];
	}
	password[indexx] = '\0';
	if (sum != 2772)
	{
		dif_half1 = (sum - 2772) / 2;
		dif_half2 = (sum - 2772) / 2;
		if ((sum - 2772) % 2 != 0)
			dif_half1++;
		for (indexx = 0; password[indexx]; indexx++)
		{
			if (password[indexx] >= (33 + dif_half1))
			{
				password[indexx] -= dif_half1;
				break;
			}
		}
		for (indexx = 0; password[indexx]; indexx++)
		{
			if (password[indexx] >= (33 + dif_half2))
			{
				password[indexx] -= dif_half2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
