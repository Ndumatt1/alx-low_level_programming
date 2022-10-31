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
	char *buf[30];
	int fd;

	fd = open(filename, O_CREAT, O_RDWR);

	if (fd == -1)
		return (0);

	write(fd, "buf", letters);
	if (letters == 0)
		return (0);

	read(STDOUT_FILENO, buf, letters);
	buf[letters] = '\0';

	close(fd);

	return (letters);
}
