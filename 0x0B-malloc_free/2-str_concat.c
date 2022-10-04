#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 *
 * @s2: second string
 *
 * Return: pointer to concatenated string (Success)
 * NULL if unsuccessful
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len = 0, s2_len = 0, len, i, j;
	char *ptr;

	if (!s1)
		s1 = "";
	for (s1_len = 0; s1[s1_len]; s1_len++)
		if (!s2)
			s2 = "";
	for (s2_len = 0; s2[s2_len]; s2_len++)
		len = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (len + 0));

	if (!ptr)
		return (0);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		ptr[i] = s2[i];
	ptr[len] = '\0';
	return (ptr);
}
