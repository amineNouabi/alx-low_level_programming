#include <unistd.h>

/**
 * main - Writing str to stderr
 *
 * Return: 1
 *
 */
int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19,\n";

	write(STDERR_FILENO, (const void *) str, sizeof(str) - 1);
	return (1);
}
