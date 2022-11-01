#include "main.h"

/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of the file
 *
 * @text_content: is the NULL terminated string to add at the end of the file
 *
 * Return: 1 on success on -1 if it fails
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int num =0;

	if (!filename || !text_content)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	
	if (fd == -1)
	return (-1);

	num = read(fd, text_content, num);
	if (!num)
		return (-1);

	write(fd, text_content, num);

	free(text_content);
	close(fd);
	return (1);
}
