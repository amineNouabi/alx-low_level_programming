#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i, shouldPrint = 0;
	unsigned long int shifted;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (i = 63; i >= 0; i--)
	{
		shifted = n >> i;
		if (!shouldPrint && shifted & 1)
			shouldPrint = 1;

		if (shouldPrint)
		{
			if (shifted & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
