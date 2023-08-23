#include "main.h"

/**
 * leet - converts string to leet
 * @str: String to convert
 * Return: Pointer to str
*/
char *leet(char *str)
{
	int i = 0, j;
	char *l = "aAeEoOtTlL";
	char *n = "4433007711";

	while (str[i])
	{
		j = 0;
		while (l[j])
		{
			if (str[i] == l[j])
				str[i] = n[j];
			j++;
		}
		i++;
	}
	return (str);
}
