#include <stdio.h>

/**
 * main - prints number of arguments.
 * @argc: count of args with program name.
 * @argv: values or args and program name.
 * Return: (0) Always
 */
int main(int argc, char **argv)
{
	if (argc && argv)
		printf("%d\n", argc - 1);
	return (0);
}
