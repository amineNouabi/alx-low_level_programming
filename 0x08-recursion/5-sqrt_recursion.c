#include "main.h"

/**
 * _sqrt_recursion - computes square root of an integer
 * @n: integer
 *
 * Return: square root of n if n is a perfect pow of 2.  -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	const int num = n;
	int pow = n * n;

	if (n < 0)
		return (-1);

	if (pow == num)
		return (pow);
	else if (pow < num)
		return (-1);

	return (_sqrt_recursion(n - 1));
}
