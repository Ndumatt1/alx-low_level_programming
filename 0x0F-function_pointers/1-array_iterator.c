#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute a function
 *
 * @array: array
 *
 * @size: size of array
 *
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}

}
