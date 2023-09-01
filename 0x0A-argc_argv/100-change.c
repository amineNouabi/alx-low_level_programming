#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints minimal number of coins to make change for an amount of money
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, minimum = 0, number;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		minimum += number / coins[i];
		number %= coins[i];
	}


	printf("%d\n", minimum);
	return (0);
}
