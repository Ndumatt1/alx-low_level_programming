#include "main.h"
/**
 * string_toupper - changes a lower to uppercase
 * @s: character to make uppercase
 * Retrun: return value upper
 */

char *string_toupper(char *s)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
		if (s[j] >= 'a' && s[j] <= 'z')

			s[j] = s[j] - 32;

	return (s);
}
