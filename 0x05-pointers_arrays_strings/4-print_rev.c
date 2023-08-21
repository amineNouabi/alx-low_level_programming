#include "main.h"

/**
 * print_rev - prints reverse of a string
 * @s: String
 * Return: void
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length])
		length++;

	for (i = length - 1; i > -1; i++)
		_putchar(s[i]);
	_putchar('\n');
}
