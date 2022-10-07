#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allcocates memmory using calloc
 *
 * @nmemb: number of blocks to be allocated
 *
 * @size: size of each block in bytes
 *
 * Return: the pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	unsigned int *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		ptr[i] = nmemb;
	ptr = calloc(nmemb, size);
	if (ptr == 0)
		return (NULL);
	for (j = 0; j < nmemb; j++)
		ptr[j] = 0;

	return (ptr);
}
