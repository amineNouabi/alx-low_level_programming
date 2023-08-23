#include "main.h"

/**
 * _strcmp -compares two strings
 * @s1: First String
 * @s2: Second dtring
 *
 * Return: difference between s1 and s2 (in this order)
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;

	return (s1[i] - s2[i]);
}
