#include "main.h"

/**
 * _strcpy - copies string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

