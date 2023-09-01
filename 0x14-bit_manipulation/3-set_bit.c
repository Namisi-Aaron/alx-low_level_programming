#include "main.h"
/**
 * set_bit - sets the bit at the given index to 1
 * @n: pointer to the integer whose byte is to be changed
 * @index: the index of the byte that is to be set to 1
 *
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
