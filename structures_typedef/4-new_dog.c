#include "dog.h"
#include <stdlib.h>


/**
 * _strlen - returns the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}


/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}



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
	char *_name, *_owner;
	int len;

	dogy = malloc(sizeof(dog_t));

	if (dogy == NULL)
		return (NULL);

	len = _strlen(name);
	_name = malloc(len + 1);
	if (_name == NULL)
	{
		free(dogy);
		return (NULL);
	}
	dogy->name = _strcpy(_name, name);
	dogy->age = age;
	len = _strlen(owner);
	_owner = malloc(len + 1);
	if (_owner == NULL)
	{
		free(_name);
		free(dogy);
		return (NULL);
	}
	dogy->owner = _strcpy(_owner, owner);

	return (dogy);
}
