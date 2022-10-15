#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: array
 *
 * @size: size of element in array
 *
 * @cmp: pointer to function used to compare values
 *
 * Return: the index of the element when cmp is not 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp != 0)
	{
		for (i = 0; i < size; i++)
		{
			(cmp)(array[i]);
		}

		if ((cmp)(array[i]) < 0)
			{
			return (-1);
			}
	}
	return (i);
}
