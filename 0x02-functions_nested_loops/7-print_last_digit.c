#include "main.h"
/**
 * print_last_digit - main function
 *
 * @n: interger to print last digit from
 *
 * return: value of last digit
 */
int print_last_digit(int n)
{
	_putchar('0' + _abs(n % 10));
			return (_abs(n % 10));
}
