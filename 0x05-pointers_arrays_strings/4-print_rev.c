#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (s++ != '\0')
		count++;

	while (count)
	{
		s--;
		_putchar(s);
	}
	_putchar('\n');
}
