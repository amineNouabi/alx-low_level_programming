#include "main.h"

/**
 * _isdigit - check if char is a digit
 * @c: integer representing character
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9' ? 1 : 0);
}
