#include <stdio.h>

/**
 * main - FizzBuzz
 *
 * Return: 0 Always
 */
int main(void)
{
	int num;

	num = 1;
	while (num < 101)
	{
		if (num % 3 == 0)
			printf("Fizz");
		if (num % 5 == 0)
			printf("Buzz");

		if (num % 3 != 0 && num % 5 != 0)
			printf("%d", num);

		if (num != 100)
			printf(" ");
		num++;
	}
	printf("\n");

	return (0);
}
