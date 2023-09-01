#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: integer input to be printed in binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int checker;

	j = 0;
	for (i = 63; i >= 0; i--)
	{
		checker = n >> i;
		if (checker & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
			_putchar('0');
	}
	if (!j)
		_putchar('0');
}
