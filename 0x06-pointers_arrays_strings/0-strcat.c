#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: destination
 * @src: string to be moved
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j + i] = src[i];
	}
	dest[j + 1] = '\0';
	return (dest);
}
