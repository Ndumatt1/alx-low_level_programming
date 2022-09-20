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
	int d = *a;
	int c = *b;

	*a = c;
	*b = d;
}
