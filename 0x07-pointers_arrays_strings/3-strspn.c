#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Return: number of byte
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strspn - gets length of prefix of a substring
 *
 * @s: string to check
 * @accept: bytes composing prefix
 *
 * Return: number of byte in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;

	while (*s && _strchr(accept, *s))
	{
		s++;
		i++;
	}
	return (i);
}
