#include "main.h"

/**
 * rev_string - reverses string
 * @s: String
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0;
	int i;

	while (s[length])
		length++;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - 1 - i] = temp;
	}
}


/**
 * infinite_add - Adds two numbers.
 * @n1: First number.
 * @n2: Second number.
 * @r: Buffer to store result.
 * @size_r: Buffer size.
 * Return: Pointer to buffer.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1_cursor, n2_cursor, r_cursor, n1_digit, n2_digit, sum, carry;

	n1_cursor = n2_cursor = r_cursor = carry = 0;
	while (n1[n1_cursor])
		n1_cursor++;
	while (n2[n2_cursor])
		n2_cursor++;
	n1_cursor--;
	n2_cursor--;

	if (n1_cursor >= size_r || n2_cursor >= size_r)
		return (0);

	/**
	 * Add digits
	 */
	while (n1_cursor >= 0 || n2_cursor >= 0)
	{
		n1_digit = n1[n1_cursor] - '0';
		n2_digit = n2[n2_cursor] - '0';
		sum = carry + (n1_cursor >= 0 ? n1_digit : 0) +
			(n2_cursor >= 0 ? n2_digit : 0);
		carry = sum / 10;
		r[r_cursor++] = (sum % 10) + '0';
		n1_cursor--;
		n2_cursor--;
	}
	if (carry > 0)
		r[r_cursor++] = carry + '0';
	if (r_cursor >= size_r)
		return (0);
	r[r_cursor] = '\0';

	/**
	 * Reverse string
	 */
	rev_string(r);
	return (r);
}
