#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * jump_search - searches for a value
 *        in an array of integers using jump search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located,
 *     or -1 if value is not present in array or if array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	int i, jump, j;

	if (!array)
		return (-1);

	jump = sqrt(size);
	i = 0;
	while (1)
	{
		if ((size_t) i >= size || array[i] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", i - jump, i);
			break;
		}
		else
			printf("Value checked array[%d] = [%d]\n", i, array[i]);

		i += jump;
	}

	j = i - jump;
	while (j <= i && (size_t) j < size)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
		j++;
	}
	return (-1);
}
