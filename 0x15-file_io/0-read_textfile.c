#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 *
 * @filename: name of the file
 *
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t num;

	if (!filename || !letters)
		return (0);

	fd = open(filename, O_RDWR);

	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);
	if (!buf)
		return (0);
	num = read(fd, buf, letters);
		if (!num)
		return (0);
	buf[letters] = '\0';

	num = write(STDOUT_FILENO, buf, num);
	free(buf);
	return (num);
}
