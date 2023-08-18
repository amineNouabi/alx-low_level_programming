#include "main.h"

/**
 * _isupper - check if char is upper
 * @c: integer representing character
 * Return: 1 if upper, 0 otherwise
 */
int _isupper(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
