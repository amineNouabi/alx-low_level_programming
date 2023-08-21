#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: String
 * Return: void
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);

		if (!(str + 1))
			break;
		str += 2;
	}
	_putchar('\n');
}
