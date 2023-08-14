#ifndef MAIN_H
#define MAIN_H
/**
 * struct dog - the types name
 * @name: the first member
 * @age: the second member
 * @owner: the third member
 *
 * Description: @name is the structs dog's name, @age is the struct's age
 * 	@owner is the owner's name
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
