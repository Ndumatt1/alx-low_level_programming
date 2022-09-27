#include "main.h"
/**
 *_memset - fills memory with a constant byte
 *
 * @s: pointer to n
 *
 * @n: number of byte
 *
 * @b: constant byte
 *
 * Retrun: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
