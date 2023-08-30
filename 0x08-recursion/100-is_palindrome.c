#include "main.h"


/**
* _strlen - calculates length of a string
* @s: String
* Return: Number of characters in string
*/
int _strlen(char *s)
{
	int count = 0;

	if (!s)
		return (0);
	while (s[count++])
		;
	return (--count);
}


/**
 * palindrome_recursion - recursion logic to check if palindrome
 * @s: String to check
 * @len: String's length.
 * @a: index to iterate.
 *
 * Return: 1 if String is palindromr, 0 otherwise
 */
int palindrome_recursion(char *s, int len, int a)
{
	if (a == len / 2)
		return (1);
	if (s[a] != s[len - 1 - a])
		return (0);
	return (palindrome_recursion(s, len, a + 1));
}


/**
 * is_palindrome - check if string is palindrome.
 * @s: String
 *
 * Return: 1 if string is palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	if (!s)
		return (0);

	return (palindrome_recursion(s, length, 0));
}
