#include <stdio.h>

/**
 * main - prints the program name
 *
 * @argc: number of argument passed to the function
 *
 * @argv: argument vector of pointers to string
 *
 * Return: 0 always
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
