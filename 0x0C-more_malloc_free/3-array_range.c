#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: smallest integer in the array
 * @max: greatest integer in the array
 * Return: pointer to new memory
 */
int *array_range(int min, int max)
{
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (int i = 0; i <= (max - min); i++)
		arr[i] = min + i;
	return (arr);
}
