#include "main.h"


/**
 * prime_recursion - recursion logic of next function.
 * @n: number to check if prime.
 * @a: index to iterate.
 *
 * Return: 1 if n is prime, 0 otherwise.
 */
int prime_recursion(int n, int a)
{
	if (a == n)
		return (1);

	if (n % a == 0)
		return (0);

	return (prime_recursion(n, a + 1));
}


/**
 * is_prime_number - checks if number is prime recursively.
 * @n: integer
 *
 * Return: 1 if n is prime or 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (prime_recursion(n, 2));
}
