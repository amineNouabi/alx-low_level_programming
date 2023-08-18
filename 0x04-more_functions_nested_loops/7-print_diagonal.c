#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal.
 * @n: length
 * Return: void
 */
void print_diagonal(int n)
{
	int spaces;

	spaces = 0;

	if (n <= 0)
		_putchar('\n');

	while (n-- > 0)
	{
		int currentSpaces = spaces;

		while (currentSpaces--)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		spaces++;
	}
}

