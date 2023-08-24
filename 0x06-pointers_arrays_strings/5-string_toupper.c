#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: String
 * Return: str
 */
char *string_toupper(char *str)
{
	unsigned int i;
	char *c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str + i;

		if (*c >= 'a' && *c <= 'z')
			*c -= 32;
		i++;
	}
	return (str);
}
