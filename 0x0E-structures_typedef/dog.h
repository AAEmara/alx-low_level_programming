#ifndef DOG_H
#define DOG_H

#include <stdio.h>

/**
 * struct dog - Includes some information about a dog.
 *
 * @name: Pointer to Character value for the name of the dog.
 * @age: Float value for the age of the given dog.
 * @owner: Pointer to Character value for the name of the owner
 * of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
