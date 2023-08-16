/**
 * _isalpha - check if char is alphabetic.
 * @c: integer representing the character ascii code.
 * Return: 1 if character is alphabetic and 0 otherwise.
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') ? 1 : 0);
}
