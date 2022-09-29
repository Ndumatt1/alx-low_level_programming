#include "main.h"

/**
 * factorial - finds the factorial of a number
 *
 * @n: number to find its factorial
 *
 * Return: -1
 */
int factorial(int n)
{
	if (n < 0)

		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
