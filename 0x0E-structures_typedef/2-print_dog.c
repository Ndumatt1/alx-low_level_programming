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

	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return;
	d = &my_dog;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("%s\n", d->name);
	}
	if (d->age == 0)
	{
		printf("(nil)\n");
	}
	else
	{
		printf("%f\n", d->age);
	}
	if (d->owner == NULL)
	{
		printf("\n(nil)");
	}
	else
	{
		printf("%s\n", d->owner);
	}
}
