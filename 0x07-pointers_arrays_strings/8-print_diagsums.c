#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - calculate sum of diags .
 * @a: Square Matrix
 * @size: Side of Matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, diag = 0, xdiag = 0;

	while (i < size)
	{
		diag += a[i * size + i];
		xdiag += a[i * size + size - 1 - i];
		i++;
	}
	printf("%d, %d\n", diag, xdiag);
}

