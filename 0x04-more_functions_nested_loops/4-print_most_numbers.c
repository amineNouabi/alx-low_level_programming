#include "main.h"

/**
 * print_most_numbers - prints 0123456789 followed by '\n'
 * Return: void
 */
void print_most_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		if (c != '2' && c != '4')
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
