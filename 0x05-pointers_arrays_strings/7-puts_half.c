#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: String
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i = 0;

	while (str[length])
		length++;
	for (i = length / 2; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
