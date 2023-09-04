#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to initialize the array with.
 * Return: length of the provided String.
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (0);

	arr = malloc(sizeof(char) * size + 1);

	if (!arr)
		return (0);

	for (i = 0; i < size; i++)
		arr[i] = c;
	arr[i] = '\0';

	return (arr);
}
