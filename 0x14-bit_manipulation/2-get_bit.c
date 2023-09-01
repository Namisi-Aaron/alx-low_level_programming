#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the integer whose bits are to be checked
 * @index: the index of the bit you want to get
 *
 * Return: the value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int binArray[63];
	int i, j, ind;
	unsigned long int checker;

	ind = 63;
	j = 0;
	for (i = 63; i >= 0; i--)
	{
		checker = n >> i;
		if (checker & 1)
		{
			binArray[ind] = 1;
			j++;
		}
		else if (j)
			binArray[ind] = 0;
		ind--;
	}
	if (!j)
		binArray[ind] = 1;
	return (binArray[index]);
}
