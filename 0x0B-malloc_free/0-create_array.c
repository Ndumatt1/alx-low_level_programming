#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of characters
 *
 * @size: size of the array
 *
 * @c: array name
 *
 * @i: array index
 *
 * @a: pointer to c
 *
 * Return: pointer to the aray or null if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(char));

		if (a == NULL)
		{
			return (NULL);
		}

		for (i = 0; i < size; i++)
		{
			a[i] = c;
		}
		return (a);
}

