#include "main.h"
/**
 * print_number - prints an integer
 * @n: printed integer
 */
void print_number(int n)
{
	unsigned int x;

	x = n;
	if (n < 0)
	{
		_putchar('-');
		x = -x;
	}
	if ((x / 10) > 0)
		print_number(num/10);
	_putchar((x % 10) + '0');
}
