#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: triangle size
 * Return: void
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
			_putchar(' ');
		
		for (k = 0; k < i + 1 ; k++)
			_putchar('#');
		_putchar('\n');
	}
}
