#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initializes a dog structure.
 *
 * @d: Pointer to dog Structre value, where it take the address of the dog
 * Structure.
 * @name: Pointer to Character value for the name of the dog.
 * @age: Float value for the age of the dog.
 * @owner: Pointer to Character value for the name of the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
