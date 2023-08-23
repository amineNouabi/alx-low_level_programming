#include "main.h"

/**
 * _strncat - concatenates n bytes from src to dest.
 * @dest: Destination String
 * @src: Source String
 * @n: Number of bytes to concate.
 * Return: Destination String
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int i;

	i = 0;
	while (dest[i++])
		;
	i--;

	while (n-- && *src)
		dest[i++] = *(src++);
	dest[i] = '\0';

	return (dest);
}

