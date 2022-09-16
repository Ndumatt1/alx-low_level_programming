#include "main.h"
/**
 * print_most_numbers - prints numbers 0 to 9
 * do not print 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
	while (i != '2' && i != '4')

	_putchar(i);
	}
	_putchar('\n');
}
