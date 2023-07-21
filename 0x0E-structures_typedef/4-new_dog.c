#include "dog.h"

/**
 * new_dog - Initializes a dog Structure using the new dog_t type definition.
 *
 * @name: Pointer to Character value for the name of the dog.
 * @age: Float value for the age of the dog.
 * @owner: Pointer to Character value for the name of the owner of the dog.
 *
 * Return: NULL if the function Fails
 *	   Address of dog_t type if the function Succeeds.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
	{
		free(dog2);
		return (NULL);
	}
	else
	{
		dog2->name = strdup(name);
		dog2->age = age;
		dog2->owner = strdup(owner);
		return (dog2);
	}
}
