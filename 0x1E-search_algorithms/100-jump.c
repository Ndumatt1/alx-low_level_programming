#include <math.h>
#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1 if value is not present
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump = sqrt(size);
	size_t prev = 0;
	size_t index = 0;

	if (!array)
	{
		return (-1);
	}
	printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
	while (array[jump] < value && jump < size)
	{
		prev = jump;
		jump += sqrt(size);
		printf("Value checked array[%d] = [%d]\n", (int)prev, array[prev]);
		if (jump >= size)
		{
			return (-1);
		}
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, jump);
	jump = (jump < size) ? jump : size - 1;
	for (index = prev; index <= jump; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index])
		{
			return (index);
		}
	}
	return (-1);
}
