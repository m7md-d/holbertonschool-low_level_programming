/**
 * init_dog - Initializes a variable of type struct dog.
 * @d: A pointer to the struct dog variable to be initialized.
 * @name: The name of the dog (string).
 * @age: The age of the dog (float).
 * @owner: The name of the owner (string).
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = *name;
	(*d).age = *age;
	(*d).owner = *owner;
}
