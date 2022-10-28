#include "main.h"

/**
 * clear_bit - sets value of a bit to zero at a given index
 *
 * @n: pointer to the value
 *
 * @index: is the index starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
