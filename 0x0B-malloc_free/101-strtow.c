#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: String to be split.
 * 
 * Return: splitted to words String in 2D array od chars.
 */
char ** strtow(char *str)
{
	char **words;
	int i, j, k, len = 0, words_count = 0, start = 0;

	if (!str || !*str)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || !str[i + 1]))
			words_count++;
	}

	words = malloc(sizeof(char *) * (words_count + 1));

	if (!words)
		return (0);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ')
		{
			start = i;
			for (len = 0; str[i] != ' ' && str[i]; i++, len++)
				;
			words[k] = malloc(len + 1);
			if (!words[k])
			{
				for (k--; k >= 0; k--)
					free(words[k]);
				free(words);
				return (0);
			}
			for (j = 0; j < len; j++)
				words[k][j] = str[start++];
			words[k++][j] = '\0';
		}
	}
	words[k] = 0;
	return (words);
}
