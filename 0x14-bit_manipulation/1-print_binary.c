#include "main.h"

/**
 * print_binary - prints binary representation of a number
 *
 * @n: number whose binary will be printed
 */

void print_binary(unsigned long int n)
{
	unsigned int i;

	for (i = 1 << (sizeof(n) * 4 - 1); i; i = i >> 1)
		printf("%u", !!(n & i));
}
