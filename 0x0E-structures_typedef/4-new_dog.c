#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char a, b;
	int i, j;

	struct dog_t
	{
		char *name;
		float age;
		char *owner;
	};
	struct dog_t new_dog;
	struct dog_t *ptr;

	ptr = malloc(sizeof(struct dog_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr = &new_dog;

	for (i = 0; ptr->name[i] != '\0'; i++)
	{
		a = ptr->name,name[i] + 1;
	}
	for (j = 0; ptr->owner[j] != '\0'; j++)
	{
		b = ptr->owner,owner[j] + 1;
	}
	return (0);
}
