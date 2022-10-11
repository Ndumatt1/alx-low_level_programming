#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 *
 */
void print_dog(struct dog *d)
{
	struct dog my_dog;
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;
	d = &my_dog;

	if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		printf("(nil)\n");
	}
		if (d->name == NULL)
			{
				printf("Name: (nil)\n");
			}
}			
