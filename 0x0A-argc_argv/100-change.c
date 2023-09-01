#include <stdio.h>

/**
 * _atoi - Parses string to integer
 * @s: String
 * Return: Positive integer if success, -1 if error
 */
int _atoi(char *s)
{
	int number = 0;

	if (!s)
		return (0);

	while (*s)
	{
		if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0');
		else
			return (-1);
		s++;
	}
	return (number);
}

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

	number = _atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		minimum += number / coins[i];
		number %= coins[i];
	}


	printf("%d\n", minimum);
	return (0);
}
