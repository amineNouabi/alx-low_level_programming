#include "main.h"
/**
 * print_sign - Prints '+' or '-' depending on parametre sign
 * @n: positive or negative integer.
 * Return: 1 if n positive | -1 if n negative | 0 if n is 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
