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
	int num = 0;

	if (!filename)
		return (-1);
	if (!text_content)
	fd = open(filename, O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	num = write(STDOUT_FILENO, text_content, num);	
	if (!num)
		return (-1);

	close(fd);
	return (1);
}
