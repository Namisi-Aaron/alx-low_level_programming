#ifndef MAIN_H
#define MAIN_H
/**
 * dog - the types name
 * @name: the name of the struct dog
 * @age: the dog's age
 * @owner: the owner's name
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
