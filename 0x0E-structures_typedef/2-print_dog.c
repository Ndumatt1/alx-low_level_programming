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
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("\nName: %s, Age: %f, Owner: %s", d->name, d->age, d->owner);

}
