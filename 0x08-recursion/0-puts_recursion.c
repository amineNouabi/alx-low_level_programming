#include "main.h"

/**
 * _puts_recursion - recursion version of puts
 * @s: String to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

