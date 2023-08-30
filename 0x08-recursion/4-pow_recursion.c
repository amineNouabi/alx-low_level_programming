#include "main.h"

/**
 * _pow_recursion - computes power with recursion
 * @x: base
 * @y: exponent
 *
 * Return: x to the y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
