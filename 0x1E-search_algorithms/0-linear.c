#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value
 *        in an array of integers using linear search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located,
 *     or -1 if value is not present in array or if array is NULL
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (!array)
		return (-1);

	for (i = 0; (size_t) i < size; i += 1)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
