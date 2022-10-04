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
	int i;
	int len = 1;
	char *ptr;

	for (i = 0; str[i] != '\0'; i++)
		if (str == NULL)
		{
			return (NULL);
		}
	ptr = malloc(len * sizeof(char));
			if (ptr == NULL)
			{
			return (NULL);
			}
	for (i = 0; i < len; i++)
	ptr[i] = *str;

	return (ptr);
}
