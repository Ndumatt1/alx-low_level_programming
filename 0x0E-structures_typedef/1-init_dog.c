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
	d->name = name;
	d->age  = age;
	d->owner = owner;
}
