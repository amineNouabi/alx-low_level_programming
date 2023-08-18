#include "main.h"

/**
 * more_numbers - prints 10 times from 0 to 14.
 *
 * Return: void
 */
void more_numbers(void)
{
	int num, n;

	n = 10;
	while (n--)
	{
		num = 0;
		while (num < 15)
		{
			if (num > 0)
				_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
			num++;
		}
	_puthar('\n');
	}
}
