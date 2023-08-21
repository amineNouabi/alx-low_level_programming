#include "main.h"

/**
 * puts_half - prints second half of a string.
 * @str: String
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int i, startingIndex;

	while (str[length])
		length++;

	startingIndex = length / 2 + length % 2 != 0 ? 1 : 0;
	for (i = startingIndex; i < length; i++)
		_putchar(str[i]);
	_putchar('\n');
}
