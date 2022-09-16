#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * followed by new line
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i <= 14; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');

		}
	_putchar('\n');
	}
}
