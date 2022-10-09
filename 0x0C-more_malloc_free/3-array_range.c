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
int i;
int arr;
int n;
int *ptr;

if (min > max)
return (NULL);
ptr = malloc(n * sizeof(int));
if (ptr == NULL)
return (NULL);
for (i = 0; i < n; i++)
ptr[i] = arr;
{
ptr[i] = min + max;
}
return (ptr);
}
