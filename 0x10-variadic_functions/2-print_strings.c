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
	char *str;
	unsigned int i;
	unsigned int len;
	unsigned int j;

	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char*);
		printf("%s\n", str);
	}
	va_end(ptr);

	for (j = 0; str[j] != '\0'; len++)
	{
		str[j] = len;
	}
	if (i < n + 1 && separator != NULL)
	{
		printf("%s\n", separator);
	}
	if (str[j] == '\0')
	{
		printf("(nil)");
	}
	printf("\n");
}
