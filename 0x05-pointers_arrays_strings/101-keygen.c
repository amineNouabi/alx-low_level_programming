#include <time.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Generate password
 * Return: 0 Always
 */
int main(void)
{
	int TARGET = 2772, random, count, remaining;

	srand(time(0));

	random = rand() % 125 + 1;
	count = TARGET / random;
	remaining = TARGET % random;

	while (count--)
		putchar(random);

	if (remaining)
		putchar(remaining);

	return (0);
}

