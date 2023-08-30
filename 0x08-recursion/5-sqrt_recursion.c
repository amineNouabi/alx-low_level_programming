#include "main.h"

/**
 * _sqrt - calculates square root of n.
 * @n: number
 * @a: iterator  from  0 to square root of n.
 *
 * Return: square root of n if n is a perfect square.
 */
int _sqrt(int n, int a)
{
	int square = a * a;

	if (square == n)
		return (a);
	else if (square > n)
		return (-1);
	return (_sqrt(n, a + 1));
}


/**
 * _sqrt_recursion - computes square root of an integer
 * @n: integer
 *
 * Return: square root of n if n is a perfect pow of 2.  -1 otherwise.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt(n, 0));
}
