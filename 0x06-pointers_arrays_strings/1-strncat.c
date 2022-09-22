#include "main.h"
#include <string.h>

/**
 *_strncat - concatenates two strings
 *
 * @dest: destination string
 *
 * @src: string to be moved
 *
 * @n: number of bytes
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
