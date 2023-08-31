#include <math.h>
#include "main.h"
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string containing 1s and 0s
 * Return: the converted number on success,
 * 0 if b is NULL, of b contains characters that are neither 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	int len, counter, power;
	unsigned int num;

	len = strlen(b);
	power = len - 1;
	num = 0;
	counter = 0;
	if (b == NULL)
		return (0);
	while (b[counter] != '\0')
	{
		if (b[counter] != '0' && b[counter] != '1')
			return (0);
		else if (b[counter] == '1')
			num += pow(2, power);
		else if (b[counter] == '0')
			num += 0;
		power--;
		counter++;
	}
	return (num);
}
