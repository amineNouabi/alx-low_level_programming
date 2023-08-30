#include "main.h";

/**
 * factorial - calculates fatorial of a number
 * @n: number
 *
 * Return: factorial of n if n greater or equal to 0, -1 otherwise.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
