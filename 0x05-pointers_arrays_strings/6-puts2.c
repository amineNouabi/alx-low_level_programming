#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: String
 * Return: void
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (s[length++])
		;
	length--;

	for (i = 0; i < length; i += 2)
		_putchar(s[i]);

	_putchar('\n');
}
