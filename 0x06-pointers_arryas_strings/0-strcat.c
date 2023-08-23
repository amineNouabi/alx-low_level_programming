#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination String
 * @src: Source String
 * Return: Destination String
 */
char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i++])
		;
	i--;

	while (*src)
		dest[i++] = *(src++);
	dest[i] = '\0';

	return (dest);
}
