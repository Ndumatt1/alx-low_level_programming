#include "search_algos.h"

int binary_search2(int *array, size_t left, size_t right, int value);

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the index where value is located, -1 if array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t index, mid;
	int result;

	if (!array)
		return (-1);

	printf("Searching in array: ");
	for (index = 0; index < size; index++)
		printf("%d%s", array[index], index == size - 1 ? "\n" : ", ");

	mid = (size - 1) / 2;
	if (array[mid] == value)
	{
		if (mid == 0 || array[mid - 1] != value)
			return (mid);
	}
	if (size == 1)
		return (-1);

	if (array[mid] < value)
	{
		result = advanced_binary(array + mid + 1, size - mid - 1, value);
		if (result == -1)
			return (-1);
		return (result + mid + 1);
	}
	else
		return (advanced_binary(array, mid + 1, value));
}
