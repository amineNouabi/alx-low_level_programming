#include "main.h"

/**
 * _memcpy - copies memory area from src to dest
 * @dest: Destination string.
 * @src: Source string.
 * @n: number of bytes to copy.
 *
 * Return: destination string address.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
