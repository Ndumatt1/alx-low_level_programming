#include "main.h"
/**
 * _memcpy - copies memory area
 *
 * @dest: destination memory
 *
 * @src: memory area to be copied
 *
 * @n: number of bytes to be copied
 *
 * Return: pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	while (n--)
	{
		*(dest + n) = *(src + n);
	}
	return (dest);
}

