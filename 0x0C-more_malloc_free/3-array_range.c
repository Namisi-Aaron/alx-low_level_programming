#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an ordered array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to new array
 * return NULL if min > max; if malloc fails
 */
int *array_range(int min, int max)
{
	int *array;
	int ar_size, i;

	if (min > max)
		return (NULL);

	ar_size = max - min + 1;

	array = malloc(sizeof(int) * ar_size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < ar_size; i++)
		array[i] = min++;

	return (array);
}
