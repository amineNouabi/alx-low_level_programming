#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_number - Prints an integer.
 * @n: Integer to print.
 * Return: void
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		print_number(num / 10);

	_putchar((num % 10) + '0');
}

/**
 * print_diagsums - calculate sum of diags .
 * @a: Square Matrix
 * @size: Side of Matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, diag = 0, xdiag = 0;

	while (i < size)
	{
		diag += a[i * size + i];
		xdiag += a[i * size + size - 1 - i];
		i++;
	}
	print_number(diag);
	_putchar(',');
	_putchar(' ');
	print_number(xdiag);
	_putchar('\n');
}

