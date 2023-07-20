#include "main.h"
/**
 * print_most_numbers - prints numbers 0 - 9
 * 	don't print 2 and 4
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 4 && i != 2)
			_putchar('0' + i);
	}
	_putchar('\n');
}
