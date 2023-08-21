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

	while (s[length++])
		;
	length--;

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - i - 1];
		s[length - 1 - i] = temp;
	}
}
