#include "main.h"

/**
 * flip_bits - count the number of bits to change
 *
 * @n: first number
 *
 * @m: secong number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> 1;
		if (current & 1)
			count++;
	}
	return (count);
}
