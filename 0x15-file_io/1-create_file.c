#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: name of file to create
 *
 * @text_content: NuLL terminated string to write to the file
 *
 * Return: 1 on success -1 on failure
 *
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int size = 0;

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 600);

	if (fd == -1)
		return (-1);

	write(fd, "text_content", size);

	if (text_content == NULL)

		close(fd);

	return (1);
}
