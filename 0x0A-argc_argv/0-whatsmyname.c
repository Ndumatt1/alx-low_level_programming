#include "main.h"
#include <stdio.h>

/**
 * print_name -  prints name of program followed by a newline
 *
 * @argc: argument count
 *
 * @argv: argument value
 *
 * @i: variable storing index
 */

void print_name(int argc, char *argv[], int i)
{
	for (i = 0; i < argc; i++)
	{
		while (i == 0)
		{
		_putchar(argv[i]);
		}
	}
	_putchar('\n');
}
