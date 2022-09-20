#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to as 98
 * @n: the pointer value
 * return: Always 0
 */

void reset_to_98(int *n)
{
	int i = 98;

	n = &i;

	_putchar("%d", &n);
	_putchar("%d", *n);
}
