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
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	return (NULL);
}
