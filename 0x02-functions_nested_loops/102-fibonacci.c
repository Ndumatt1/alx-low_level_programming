#include <stdio.h>
/**
 * main - print the first 50 fibonacci numbers
 *
 * starting with one and 2
 * Return: always 0
 */

int main(void)
{
	int r = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);

	while (r <= 50)
	{
		if (r == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}
		k = j;
		j += i;
		i = k;
		r++;
	}
	return (0);
}

