#include "main.h"
/**
 * print_last_digit - print the last digit of an integer.
 * @n: integer
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n > 0 ? n % 10 : -n % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
