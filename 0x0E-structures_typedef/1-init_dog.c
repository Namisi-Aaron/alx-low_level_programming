#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - the dog
 * @d: memory pointer
 * @name: dog's name
 * @age: it's age
 * @owner: owner's name
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
