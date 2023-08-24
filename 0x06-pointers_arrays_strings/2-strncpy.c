#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination String
 * @src: Source String
 * @n: Number of bytes to copy
 *
 * Return: Destination String
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	if (!dest || n <= 0)
		return (dest);

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
		dest[i++] = '\0';

	return (dest);
}
