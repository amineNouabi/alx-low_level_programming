#include "main.h"

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
		int current = n;

		if (n < 0)
		{
			_putchar('-');
			current *= -1;
		}

		while (current != 0)
		{
			_putchar(current % 10 + '0');
			current /= 10;
		}

		_putchar(',');
		_putchar(' ');

		n += step;
	}

	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
