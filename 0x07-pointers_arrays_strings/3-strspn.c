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

	if (!s)
	return (0);

	while (*(s + i))
	{
		if (c == *(s + i))
			return (s + i);
		i++;
	}

	if (!c)
		return (s + i);
	return (0);
}

/**
 * _strspn - gets the length of a prefix substring
 * @s: String.
 * @accept: String of characters to accept
 *
 * Return: length of the prefix string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	if (!s)
		return (0);

	while (*s && _strchr(accept, *(s++)) && ++length)
		;
	return (length);
}

