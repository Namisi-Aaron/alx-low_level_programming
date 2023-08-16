#include "function_pointers.h"
/**
 * array_iterator - executes a function on each element of an array
 * @size: the size of the array
 * @action: pointer to the function to be executed
 * @array: the array of elements
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
