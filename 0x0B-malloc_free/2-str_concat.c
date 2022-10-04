#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int len = 1;
	char *ptr;

	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
		{
			s1[i + j] = s2[j];
		}
	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len; i++)
		for (j = 0; j < len; j++)
		{
			s1[i + j] = s2[j];
		}
	ptr[len] = '\0';
	
	return (ptr);
}
