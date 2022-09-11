#include <stdio.h>
/**
 * main - prints all the numbers of base 16 lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
