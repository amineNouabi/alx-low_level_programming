#include "main.h"
/**
 * print_last_digit - print the last digit of an integer.
 * @n: integer
 * Return: void
 */
void print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

	putchar((n % 10) + '0');
}
