#include <stdio.h>

/**
 * main - Find largest prime factor of 612852475143
 * Return: 0 Always
 */
int main(void)
{
	const long int number = 612852475143;
	int max_prime_factor, i, j;
	
	max_prime_factor = 0;
	for (i = 2; i < number; i++)
	{
		int is_prime = 0;
		
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
			{
				is_prime = 1;
				break;
			}
		}

		if (is_prime)
			max_prime_factor = i;
	}

	printf("%d\n", max_prime_factor);

	return (0);
}
