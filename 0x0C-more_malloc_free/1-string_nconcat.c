#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: destination string
 *
 * @s2: string to be concatenated
 *
 * @n: number of bytes to be allocated
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, len1 = 0, len2 = 0;
	char *ptr;

	ptr = malloc(n * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i]++;

	if (s1 == NULL)
		return ("");
	if (s2 == NULL)
		return ("");

	if (n >= len2)
	{
		for (j = 0; s1[len1] != '\0'; j++)
		{
			s1[j]++;
		}
			for (k = 0; s2[len2] != '\0'; k++)
			{
				s2[k]++;
			}
			s1[j + k] = s2[k];
	}
	s1[j + k] = '\0';
	ptr[i] = (s1[j + k]);
	return (ptr);
}
