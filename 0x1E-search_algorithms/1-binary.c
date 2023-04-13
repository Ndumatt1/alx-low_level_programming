#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integer
 * @array: Pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: The value to search for
 * Return: index w
 * here value is located or -1 if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	int right = size - 1;
	int left = 0;
	int middle;
	int index = 0;

	if (!array)
	{
		return (-1);
	}
	while (left <= right)
	{
		middle = (right + left) / 2;
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			printf("%d", array[index]);
			if (index < right)
				printf(", ");
		}
		printf("\n");
		if (value == array[middle])
		{
			return (middle);
		}
		else if (value > array[middle])
		{
			left = middle + 1;
		}
		else
		{
			right = middle - 1;
		}
	}
	return (-1);
}
