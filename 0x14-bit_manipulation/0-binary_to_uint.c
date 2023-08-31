#include "main.h"
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: a string containing 1s and 0s
 * Return: the converted number on success,
 * 0 if b is NULL, of b contains characters that are neither 0 or 1
 */

int _strlen(const char *str);
int _pow_recursion(int x, int y);

unsigned int binary_to_uint(const char *b)
{
	int len, counter, power;
	unsigned int num;

	len = _strlen(b);
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
			num += _pow_recursion(2, power);
		else if (b[counter] == '0')
			num += 0;
		power--;
		counter++;
	}
	return (num);
}
/**
 * _strlen - returns the length of a string
 * @str: string whose length is to be computed
 * Return: the length of string str
 */
int _strlen(const char *str)
{
        int i;

        i = 0;
        while (str[i] != '\0')
                i++;
        return (i);
}
/**
 * _pow_recursion - returns the value of x ^ y
 * @x: base
 * @y: exponent
 *
 * Return: -1 if y < 0,
 * value if y is valid
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
