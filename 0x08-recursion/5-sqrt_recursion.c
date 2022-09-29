#include "main.h"

/**
 * sqrt_guess - checks for the sqaure of c
 * @b: number to guess
 * @c: number to check sqaureroot
 * Return: -1 or c
 */

int sqrt_guess(int b, int c)
{
	if (b * b == c)
		return (c);
	if (b * b > c)
		return (-1);
	return (sqrt_guess(b + 1, c));
}

/**
 * _sqrt_recursion - returns natural square root of a number
 * @n: number to find square root
 * Return: natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_guess(1, n));
}
