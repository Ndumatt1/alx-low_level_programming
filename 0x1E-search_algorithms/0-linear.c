#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 * Return: the first index where value is located or NULL if array is empty
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
	{
		return (-1);
	}
	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
	}
	return (-1);
}
