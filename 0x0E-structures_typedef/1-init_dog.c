#include <stdlib.h>
#include "dog.h"
#include <string.h>

/**
 * init_dog - initializes a variable of type struct dog
 *
 * @d: pointer to structure
 *
 * @name: first member
 *
 * @age: second member
 *
 * @owner: third member
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog ptr;

	d = malloc(sizeof(struct dog));

	d = &ptr;

	strcpy(d->name, name);
	d->age  = age;
	strcpy(d->owner, owner);
}
