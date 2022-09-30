#include <stdio.h>

/**
 * main - prints the number of argument passed to it
 *
 * @argc: argument count
 *
 * @argv: argument value
 *
 * Return: 0 always
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
