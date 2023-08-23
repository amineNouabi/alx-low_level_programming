#include "main.h"

/**
 * rot13 - encodes String to ROT13
 * @str: String to encode
 * Return: Pointer to str
 */
char *rot13(char *str)
{
	int i = 0, j;
	char *l = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *n = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i])
	{
		j = 0;
		while (l[j])
		{
			if (str[i] == l[j])
			{
				str[i] = n[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
