#include<stdio.h>

/**
 *	main - Prints BAse 16 Characters
 *
 *	Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= 'f'; c++)
	{
		putchar(c);

		if (c == '9')
			c += 'a' - '9' - 1;
	}
	putchar('\n');

	return (0);
}
