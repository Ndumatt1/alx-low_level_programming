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
	if (y < 0)

		return (-1);
	if (y == 0)
	return (x * _power_recursion(x, y - 1));
}
