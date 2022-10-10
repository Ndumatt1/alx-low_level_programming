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

int main(void)
{

		printf("%s\n", __FILE__);

	return (0);
}
