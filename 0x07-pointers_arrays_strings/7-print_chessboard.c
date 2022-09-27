#include "main.h"

/**
 * print_chessboard - prints a chessboard
 *
 * @a: 2 dimensoinal array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar ((*(a[8] + i))[j]);
		}
		_putchar ('\n');
	}
}
