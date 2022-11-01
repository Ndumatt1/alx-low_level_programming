#include "main.h"

/**
 * main - copies the content of a file to another file
 *
 * @argc: argument count
 *
 * @argv: vector pointer to argc
 *
 * Return: 1 if successful and -1 if it fails
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage:cp file_from file_to\n");
		exit(97);
	}

	if ((fd1 = open(argv[1], O_RDWR)) == -1)
		{
			dprintf(STDERR_FILENO, "Error: can't read file argv[1]\n");
			exit(98);
		}
	if ((fd2 = creat(argv[2], 0666)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't write to arg[2]\n");
		exit(99);
	}
	/** if (fd2(close) == -1)
		exit(100);
		dprintf(STDERR_FILENO, "Error: can't close fd2\n");*/
	write(fd2, buf, 1024);

	read(fd1, buf, 1024);

	if ((close(fd1) == -1))
	{
	dprintf(STDERR_FILENO, "Error: can't close fd2\n");
	exit(100);
	}
	return (1);
}
