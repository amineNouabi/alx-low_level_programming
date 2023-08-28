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
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String.
 * @accept: String of characters to accept
 *
 * Return: address of first occurrence.
 */
char *_strpbrk(char *s, char *accept)
{
	if (!s)
		return (0);

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (0);
}

