#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * interpolation_search - searches for a value
 *        in an array of integers using interpolation search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located,
 *     or -1 if value is not present in array or if array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	int i, left, right;

	if (!array || !size)
		return (-1);

	left = 0;
	right = size - 1;
	while (left <= right)
	{
		i = left + ((float) (value - array[left]) /
			(array[right] - array[left])) * (right - left);

		if ((size_t) i < size)
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%d] is out of range\n", i);
			return (-1);
		}

		if (array[i] == value)
			return (i);
		else if (array[i] < value)
			left = i + 1;
		else
			right = i - 1;
	}
	return (-1);
}
