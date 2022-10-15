#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints string
 *
 * @separator: strings to be printed between strings
 *
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);

		if (!str)
			str = "(nil)";

	if (!separator)

		printf("%s", str);
	else if (separator && i == 0)

		printf("%s", str);
	else
		printf("%s%s", separator, str);

	}
	printf("\n");
	va_end(ptr);
}
