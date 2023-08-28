#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: String
 * @c: Character
 *
 * Return: address of found character, if doesn't  exist NULL.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i))
	{
		if (c == *(s + i))
			return (s + i);
		i++;
	}
	return (0);
}
