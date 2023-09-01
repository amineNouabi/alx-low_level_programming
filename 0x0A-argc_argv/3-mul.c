#include <stdio.h>

/**
 * _atoi - Parses string to integer
 * @s: String
 * Return: Integer
 */
int _atoi(char *s)
{
	int number = 0;
	int sign = 1;

	if (!s)
		return (0);

	while (*s)
	{
		if (*s == '-' && !number)
			sign *= -1;
		if (*s >= '0' && *s <= '9')
			number = number * 10 + (*s - '0') * sign;
		else
			if (number)
				break;
		s++;
	}
	return (number);
}

/**
 * main - Prints the result of multiplication of two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 * Return: 0 if success, 1 if error
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}
