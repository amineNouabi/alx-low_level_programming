#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print, 0 if:
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t count;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(fd);
		return (0);
	}

	if (read(fd, buff, letters) == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	count = write(STDOUT_FILENO, buff, letters);
	free(buff);
	close(fd);
	return (count == (ssize_t) letters ? count : 0);
}
