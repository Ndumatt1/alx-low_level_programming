#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power y
 *
 * @x: value to check
 *
 * @y: power of the value
 *
 * Return: -1
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (-1);
	}

	_putchar(x);

	_pow_recursion(x,  y);
}