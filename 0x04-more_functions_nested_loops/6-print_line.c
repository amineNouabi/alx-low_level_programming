#include "main.h"

/**
 * print_line - draws a straight line in the terminal.
 * @n: length of the line
 * Return: void
 */
void print_line(int n)
{
	while (n-- > 0)
		_putchar('_');
	_putchar('\n');
}
