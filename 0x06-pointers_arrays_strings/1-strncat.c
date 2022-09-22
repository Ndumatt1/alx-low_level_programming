#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
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

	for (i = 0; i <= '\0'; i++)
	{
		_putchar(src[i]);
	}

	if (n >= 0 && (n != '\0') 
			n++;
	{
		_putchar(src[n]);
	}
	_putchar(dest, src);
}
