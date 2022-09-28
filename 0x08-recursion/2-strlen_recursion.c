#include "main.h"

/**
 *_strlen_recursion - returns length of a string
 *
 * @s: pointer to the string
 */

int _strlen_recursion(char *s)
{
	if (*s > '\0')
	{
		return(0);
	}

	_putchar(*s);

	_strlen_recursion(s + 1);
}
