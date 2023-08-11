#include<stdio.h>

/**
 *	main - prints comma seperated combinations 00 01 ... 01 02 -> 98 99
 *
 *	Return: 0
 */
int main(void)
{
	int	t[2];

	t[0] = 0;
	while (t[0] <= 98)
	{
		t[1] = t[0] + 1;
		while (t[1] <= 99)
		{
			putchar((t[0] / 10) + 48);
			putchar((t[0] % 10) + 48);
			putchar(' ');
			putchar((t[1] / 10) + 48);
			putchar((t[1] % 10) + 48);
			if (t[0] != 98)
			{
				putchar(',');
				putchar(' ');
			}
			t[1]++;
		}
		t[0]++;
	}
	putchar('\n');

	return (0);
}
