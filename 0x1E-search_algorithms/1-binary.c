#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - searches for a value in a sorted array
 *         of integers using binary search
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located,
 *     or -1 if value is not present in array or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle, left, right;

	if (!array)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);

		middle = (right + left) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}

/**
 * print_array - prints an array of integers
 * @array: pointer to the first element of the array to print
 * @left: leftmost index to print
 * @right: rightmost index to print
 * Return: void
 */
void print_array(int *array, size_t left, size_t right)
{

	while (left <= right)
	{
		printf("%d", array[left]);
		if (left != right)
			printf(", ");
		left++;
	}
	printf("\n");
}
