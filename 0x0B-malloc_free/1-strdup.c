#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - reteuns a pointer to a newly allocated space in memory
 *
 * @str: pointer to string
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	int i, j;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		if (str == NULL)
		{
			return (NULL);
		}
	ptr = malloc(i * sizeof(char));
			if (ptr == NULL)
			{
			return (NULL);
			}
	for (j = 0; j < i; j++)
	{
	ptr[j] = str[j];
	}
	return (ptr);
}
