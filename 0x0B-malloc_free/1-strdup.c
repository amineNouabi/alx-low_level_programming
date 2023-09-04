#include "main.h"
#include <stdlib.h>

/**
 * _strlen - calculates length of a string
 * @s: String
 * Return: Number of characters in string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count++])
		;

	return (--count);
}


/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to be copied.
 * Return: pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (!str)
		return (0);

	len = _strlen(str);

	dup = malloc(len + 1);

	if (!dup)
		return (0);

	i = 0;
	while (dup[i++] = str[i])
		;

	return (dup);
}
