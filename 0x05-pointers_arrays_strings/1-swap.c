#include "main.h"

/**
 * swap_int - swaps pointer a and b
 *
 * @a: pointer to be swaped
 *
 * @b: second pointer to be swapped
 */

void swap_int(int *a, int *b)
{
	a = 90;
	b = 10;

	*a = *b;
	*b = *a;

	_putchar(*a, *b);
}
