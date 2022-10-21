#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		_putchar(x++ + '0');
	}
	 _putchar('\n');
}

