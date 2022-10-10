#include <stdio.h>

/**
 * main - prints the name of file it was compiled from
 *
 * @argc: argument count
 *
 * @argv: argument vector pointer to argc
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc >= 0)

		printf("%s\n", argv[0]);

	return (0);
}
