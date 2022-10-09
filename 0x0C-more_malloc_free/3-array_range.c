#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * array_range - creates array of integers
 *
 * @min: minimum value
 *
 * @max: maximum value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
int i, j;
int arr[4];
int *ptr;

if (min > max)
return (NULL);
ptr = malloc(max * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = 0; i < max; i++)
ptr[i] = min + max;
for (j = 0; j < 4; j++)
{
	ptr[i] = arr[j];
}
return (ptr);
}
