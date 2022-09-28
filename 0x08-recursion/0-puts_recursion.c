#include "main.h"

/**
 * _puts_recursion - a fucntion that prints a string
 *
 * @s: pointer to the string
 *
 */

void _puts_recursion(char *s)
{
	_puts_recursion(s);

	_putchar('\n');
}
