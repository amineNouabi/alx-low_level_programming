#include "main.h"

#define BUFFER_SIZE 1024

#define ARGS_ERRMSG "Usage: cp file_from file_to\n"
#define READ_ERRMSG "Error: Can't read from file "
#define WRITE_ERRMSG "Error: Can't write to "

/**
 * error_handler - writes err msg base on status.
 * @argv: main arguments.
 * @status: int
 * @fd: file descriptor in case error 100 otherwise -1.
 *
 * Return :void
 */
void error_handler(char **argv, int status, int fd)
{
	if (status == 97)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	else if (status == 98)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	else if (status == 99)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	else if (status == 100)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);

	exit(status);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	ssize_t count;
	int fd_from, fd_to;
	char *buffer;

	if (argc != 3)
		error_handler(argv, 97, -1);

	buffer = malloc(sizeof(char) * BUFFER_SIZE);
	if (!buffer)
		return (-1);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from < 0)
		error_handler(argv, 98, -1);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to < 0)
		error_handler(argv, 99, -1);

	while ((count = read(fd_from, buffer, BUFFER_SIZE)))
		if (write(fd_to, buffer, count) != count)
			error_handler(argv, 99, -1);

	if (count < 0)
		error_handler(argv, 98, -1);
	if (close(fd_from) < 0)
		error_handler(argv, 100, fd_from);
	if (close(fd_to) < 0)
		error_handler(argv, 100, fd_to);
	return (0);
}
