#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements
 * @size: number of bytes for each element
 * Return: pointer to allocated memory
 * return NULL if nmemb || size == 0
 * return NULL if _calloc fails
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	char *x;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(size * nmemb);

	if (array == NULL)
		return (NULL);

	x = array;

	for (i = 0; i < (size * nmemb); i++)
		x[i] = '\0';

	return (array);
}
