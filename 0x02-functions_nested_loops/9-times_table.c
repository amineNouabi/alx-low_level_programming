#include "main.h"

/**
 * times_table - prints multiplication table by lines
 *
 * Return: void
 */
void times_table(void)
{
	int number, factor, res;

	number = 0;

	while (number < 10)
	{
		factor = 0;

		while (factor < 10)
		{
			res = number * factor;

			if (factor == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (res > 9)
				{
					_putchar(res / 10 + '0');
				}
				else
				{
					_putchar(' ');
				}

				_putchar(res % 10 + '0');
			}
			factor++;
		}
		_putchar('\n');
		number++;
	}
}
