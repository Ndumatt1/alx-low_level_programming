#include "main.h"
#include "2-strlen.c"
/**
 * _strcpy - copies a string
 *
 * @src: src
 *
 * @dest: destionation
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
