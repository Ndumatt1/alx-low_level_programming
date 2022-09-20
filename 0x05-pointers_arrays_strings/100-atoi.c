#include "main.h"
/**
 *_atoi - converts a string to an integer
 * @s: char array string
 * Retrun: first integer
 */
int _atoi(char *s)
{
	int i;
	int k, p;

	k = 0;
	p = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			p *= -1;

		if (s[i] > 47 && s[i] < 58)
		{
			if (k < 0)
			     k = (k * 10) - (s[i] - '0');
			else
				k = (s[i] - '0') * -1;
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}
	if (p < 0)
		k *= -1;
	return (k);
}
