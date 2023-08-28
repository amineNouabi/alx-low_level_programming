#include "main.h"

/**
 * _strstr - locates substring in string.
 * @haystack: String.
 * @needle: Sub-string.
 *
 * Return: address at begining of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;
	
	if (!haystack || !needle)
		return (0);

	while (haystack[i])
	{
		j = 0;
		while (needle[j] && haystack[i + j] && haystack[i + j] == needle[j])
			j++;
		if (!needle[j])
			return (haystack + i);
		i++;
	}
	return (0);
}

