#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure that defines a dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initializes a struct dog
 * @d: pointer to struct dog
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print dog status.
 * @d: pointer to struct dog.
 *
 * Return: nothing.
 */
void print_dog(struct dog *d);

#endif /* DOG_H */
