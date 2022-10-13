#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @seperator: string to be prinnted between numbers
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
		num = va_arg(ptr, unsigned int);
	}
	if (!separator)
		return;
	if (!num)
	{
	printf("%s %d\n", separator, num);
	}	
	_putchar('\n');
}
