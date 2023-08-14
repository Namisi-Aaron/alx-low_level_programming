#include "dog.h"
/**
 * init_dog - initializes a variable of type struct dog
 * @name: the dog's name
 * @age: the dogs age
 * @owner: the name of the dog's owner
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
