#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from given param to 98.
 * @n: integer as a starting point.
 * Return: void
 */
void print_to_98(int n)
{
	int step = n > 98 ? -1 : 1;

	while (n != 98)
	{
		printf("%d, ", n);
		n += step;
	}

	printf("98\n");
}
