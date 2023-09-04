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
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer to concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	concat = malloc(len1 + len2 + 1);

	if (!concat)
		return (0);

	i = 0;
	while (s1[i])
	{
		concat[i] = s1[i];
		i++;
	};

	j = 0;
	while ((concat[i++] = s2[j++]))
		;

	return (concat);
}
