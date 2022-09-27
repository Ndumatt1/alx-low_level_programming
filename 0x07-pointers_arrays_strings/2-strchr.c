#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Return: pointer to first occurence c in the string s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}

