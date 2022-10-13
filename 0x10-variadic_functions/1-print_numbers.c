#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: string to be prinnted between numbers
 *
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int num;
	unsigned int i;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(ptr, int);
		printf("%d\n", num);
	}
	if (i < n - 1 && separator != NULL)
	{
		printf("%s", separator);
	}
	va_end(ptr);
}
