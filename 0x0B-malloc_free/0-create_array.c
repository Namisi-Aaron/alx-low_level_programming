#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: size of array
 * @c: initialization character
 * Return: character pointer to array, NULL if size is 0 or malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	a = malloc(sizeof(char) * size);
	if (size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		a[i] = c;
	return (a);
}
