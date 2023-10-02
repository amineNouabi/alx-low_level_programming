#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append text to
 * @text_content: NULL terminated string to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, n_wrote, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = strlen(text_content);

		n_wrote = write(fd, text_content, len);
		if (n_wrote == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (1);
}
