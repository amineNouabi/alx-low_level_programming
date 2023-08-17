#include "main.h"
/**
 * print_times_table - prints multiplication table from 0 to n
 * @n: integer
 * Return: void
 */
void print_times_table(int n)
{
	int number, factor, res;

	if (n > 15 || n < 0)
		return;
	number = 0;
	while (number <= n)
	{
		factor = 0;
		while (factor <= n)
		{
			res = number * factor;
			if (factor == 0)
				_putchar('0');
			else
			{
				_putchar(',');
				_putchar(' ');
				if (res > 99)
					_putchar(res / 100 + '0');
				else
					_putchar(' ');
				if (res > 9)
					_putchar(res / 10 % 10 + '0');
				else
					_putchar(' ');
				_putchar(res % 10 + '0');
			}
			factor++;
		}
		_putchar('\n');
		number++;
	}
}
