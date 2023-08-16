
/**
 * _islower - check if char is lowercase.
 * @c: integer representing the character ascii code.
 * Return: 1 if character is lowercase and 0 otherwise.
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z' ? 1 : 0);
}
