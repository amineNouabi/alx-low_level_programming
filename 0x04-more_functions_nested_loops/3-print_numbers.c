#include "main.h"

/**
 * print_numbers - prints 0123456789 followed by '\n'
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
