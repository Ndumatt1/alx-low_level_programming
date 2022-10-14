#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function given as parameter on each element of an array
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		(action)(array[i]);
	}

}
