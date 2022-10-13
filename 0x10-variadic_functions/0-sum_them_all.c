#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - variadic fucntion that sums all its paramters
 *
 * @n: number of parameters
 *
 * Return: sum of all the parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int total = 0;
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		total += va_arg(ptr, int);
	}
	va_end(ptr);
	return (total);
}
