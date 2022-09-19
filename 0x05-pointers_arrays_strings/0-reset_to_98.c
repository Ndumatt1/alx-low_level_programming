#include "main.h"

/**
 * reset_to_98 - takes a pointer to an int as parameter
 * and updates the value it points to as 98
 * @n: the pointer value
 */

void reset_to_98(int *n)
{
	int j = 98;
	 *n = j;

	_putchar("%d", *n);
}
