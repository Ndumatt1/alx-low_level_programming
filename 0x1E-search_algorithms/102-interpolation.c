#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array
 * using interpolation search
 * @array: Pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: The value to search for
 * Return: The first index where value is located or -1 if value not in array
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t high = size - 1;
	size_t low = 0;

	if (!array)
	{
		return (-1);
	}
	while (low <= high && value >= array[low] && value <= array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
						(value - array[low]));
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (value == array[pos])
		{
			return (pos);
		}
		else if (value > array[pos])
		{
			low = pos + 1;
		}
		else
		{
			high = pos - 1;
		}
	}
	return (-1);
}
