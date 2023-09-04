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
 * argstostr - concatenates all the arguments of your program.
 * @ac: number of arguments.
 * @av: array of arguments.
 * Return: pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len = 0;

	if (ac <= 0 || !av)
		return (0);

	for (i = 0; i < ac; i++)
		len += _strlen(av[i]) + 1;

	str = malloc(len + 1);

	if (!str)
		return (0);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];

		str[k++] = '\n';
	}

	str[k] = '\0';

	return (str);
}
