#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts binary to unsigned int
 *
 * @b: pointer pointing to the string of 0 and 1
 *
 * Return: the converted number or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		value <<= 1;
		value += b[i] - '0';
		i++;
	}
	return (value);
}
