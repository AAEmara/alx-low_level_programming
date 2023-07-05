#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

/**
 * dog_t - Typedef for a dog Structure.
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
