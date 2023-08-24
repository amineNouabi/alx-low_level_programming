#include "main.h"

/**
 * to_upper - turn lowercase char into uppercase
 * @c: Character
 * Return: void
 */
static void to_upper(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

/**
 * is_separator - wraps separators
 * @c: Character
 * Return: 1 if is seperator and  0 otherwise.
 */
int	is_separator(char c)
{
	char sep[13] = ",;.!?\"(){} \t\n";
	int i = 0;

	while (sep[i])
	{
		if (c == sep[i])
			return (1);
		i++;
	}
	return (0);
}

/**
 * cap_string - Capitalizes a string.
 * @str: String:
 * Return: String
 */

char *cap_string(char *str)
{
	unsigned int i;
	int			 word;

	i = 0;
	word = 1;
	while (str[i])
	{
		if (word == 1)
			to_upper(&str[i]);

		if (!is_separator(str[i]))
			word = 0;
		else
			word = 1;
		i++;
	}
	return (str);
}
