#include <stdio.h>
#include "main.h"

/**
 * arguement - prints argument passed to it
 *
 * @argc: argument count
 *
 * @argv: arguement value
 *
 * @i: variable
 *
 * Return: an inter with a new line
 */

int arguement(int argc, char *argv[], int i)
{

	for (i = 0; i < argc; i++)

	printf("%d\n", argc);
	printf("%s\n", argv[i]);

	return (i);
}
