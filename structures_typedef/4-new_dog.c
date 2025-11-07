#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: pointer to new dog_t structure, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogy;

	dogy = malloc(sizeof(dog_t));

	if (dogy == NULL)
		return (NULL);

	dogy->name = name;
	dogy->age = age;
	dogy->owner = owner;

	return (dogy);
}
