#include "main.h"
/**
 * print_most_numbers - prints 0 - 9
 * without 2 and 4
 * Return: always 0
 */
void print_most_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		if (x != (2 || 4))
		{
			_putchar(x + '0');
		}
		_putchar('\n');
	}
}
