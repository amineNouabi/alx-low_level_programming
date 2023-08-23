#include "main.h"

/**
 * reverse_array - Reverses order of an array
 * @a: Array
 * @n: length of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = -1, temp;

	if (!a || n <= 0)
		return;

	while (++i < n / 2)
	{
		temp = a[i];

		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

