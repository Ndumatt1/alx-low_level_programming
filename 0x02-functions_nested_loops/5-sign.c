#include "main.h"
/**
 * print_sign - function that prints sign of a number
 *
 * @n: number to be compared
 *
 * Return: 1, 0 and -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
	return (1);
	}
		if (n == 0)
		{
			_putchar('0');
		return (0);
		}
				_putchar('-');
			return (-1);
}
