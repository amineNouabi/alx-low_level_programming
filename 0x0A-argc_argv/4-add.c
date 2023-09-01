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
 * main - Prints the result of addition of argc - 1 numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		int number = _atoi(argv[i]);

		if (number == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);
	return (0);
}
