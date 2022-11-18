#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @array: array of integers to search through
 * @size: size of array
 * @cmp: function pointer
 * Return: index to first element for which cmp fn
 * does not return 0
 * return -1 if no elements match
 * return -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0)
		return (-1);
	if (array && cmp)
	{
		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
				return (x);
		}
	}
	return (-1);
}
