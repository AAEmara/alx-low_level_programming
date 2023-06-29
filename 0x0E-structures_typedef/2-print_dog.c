#include "dog.h"

/**
 * print_dog - Prints the elements of a dog Structure.
 *
 * @d: Pointer to a dog Structure, where it takes the address of the
 * dog Structure.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		/**
		 * Handling the pointer pointing to NULL by printing nothing
		 */
	}
	else
	{
		if (d->name == NULL)
		{
			d->name = "(nil)";
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: %s\n", d->name);
		}
		if (d->age == 0)
		{
			d->age = 0;
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("Age: %f\n", d->age);
		}
		if (d->owner == NULL)
		{
			d->owner = "(nil)";
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: %s\n", d->owner);
		}
	}
}
