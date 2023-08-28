#include "main.h"

/**
 * set_string - sets the value of a pointer to a char.
 * @s: address of string
 * @to: String
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	if (!s)
		return;
	*s = to;
}

