#include "main.h"
#include <stdio.h>

/**
 * print_character - prints a character if printable otherwise prints "."
 * @c: character to print
 * Return: void
 */
void print_character(char c)
{
	if (c < 32 || c > 126)
		printf(".");
	else
		printf("%c", c);
}

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int i, j, k;

	if (size <= 0)
		printf("\n");
	else
	{
		for (i = 0; i < size; i += 10)
		{
			printf("%08x: ", i);
			for (j = i; j < i + 10; j += 2)
			{
				if (j < size)
					printf("%02x", *(b + j));
				else
					printf("  ");
				if (j + 1 < size)
					printf("%02x ", *(b + j + 1));
				else
					printf("   ");
			}
			for (k = i; k < i + 10; k++)
			{
				if (k >= size)
					break;
				print_character(*(b + k));
			}
			printf("\n");
		}
	}
}
