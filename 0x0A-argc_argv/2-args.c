#include <stdio.h>

/**
 * main - prints arguments of the program
 * @argc: count
 * @argv: args + prog name
 *
 * Return: (0) Always
 */
int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}
