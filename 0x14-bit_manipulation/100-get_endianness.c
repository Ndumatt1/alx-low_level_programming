#include "main.h"

/**
 * get_endianness - checks endianness
 *
 * Return: 0 for big 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
