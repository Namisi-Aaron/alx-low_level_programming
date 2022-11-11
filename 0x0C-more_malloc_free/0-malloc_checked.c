#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: memory size
 * Return: pointer to allocated memory
 * exit status of 98 upon failure
 */
void *malloc_checked(unsigned int b)
{
	void *x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
