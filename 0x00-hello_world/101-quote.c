#include <stdio.h>
/**
 * main - prints the standard error sandwiched around the standard output
 *
 * Return: 1
 */
int main(void)

{
	write(2, "and that pieces of art is useful\" -Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
