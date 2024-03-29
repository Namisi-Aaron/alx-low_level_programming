#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: the array of integers to search through
 * @size: the array size
 * @cmp: pointer to the function that searches for an integer
 * Return: index of the first element for which cmp does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]))
			return (i);
	}
	return (-1);
}
