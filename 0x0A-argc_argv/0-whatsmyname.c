#include <stdio.h>

/**
 * main - prints name of the program.
 * @argc: counr of args.
 * @argv:  arguments.
 *
 * Return: (1) Always.
 */
int main(int argc, char **argv)
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
