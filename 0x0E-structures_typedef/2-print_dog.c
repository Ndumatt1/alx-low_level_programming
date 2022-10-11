#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prints struct dog
 *
 * struct dog - structure
 *
 * @d: pointer to structure
 *
 */
void print_dog(struct dog *d)
{
	struct dog my_dog;

	d = &my_dog;

	if (d == NULL)
	{
		exit(0);
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("(nil)");
	}
	else
	{
		printf("%f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("(nil)");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
