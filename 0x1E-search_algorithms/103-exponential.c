#include "search_algos.h"
#include <math.h>

int binary_search2(int *array, size_t left, size_t right, int value);
/**
 * exponential_search - searches for a value in a sorted array of integers
 * using exponential search
 * @array: Pointer to the first element of the array to search in
 * @size: number of element in array
 * @value: value to search for
 * Return: The first index where value is located or -1 if value not in array
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t index;
	size_t i;
	size_t left;
	size_t right;
	size_t middle;

	if (!array)
	{
		return (-1);
	}
	if (array[0] == value)
	{
		return (0);
	}
	index = 1;
	while (index < size && array[index] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		index = index * 2;
	}
	left = index / 2;
	right = (index < size) ? index : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", left, right);
	while (left <= right)
	{
		middle = (right + left) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
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

/**
 * binary_search2 - searches for a value in an array using binary search
 * @array: pointer to the first element of the array
 * @left: left subarray
 * @right: right subarray
 * @value: value to search for in array
 * Return: The index of the value or -1 if array is NULL
 */
int binary_search2(int *array, size_t left, size_t right, int value)
{
	size_t middle = (right + left) / 2;

	if (!array)
	{
		return (-1);
	}
	while (left <= right)
	{
		middle = (right + left) / 2;
		if (array[middle] == value)
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
