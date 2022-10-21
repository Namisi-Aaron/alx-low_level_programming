#include "main.h"
/**
 * print_line - draws a straight line
 * @x: length of line
 * Return: Always 0
 */
void print_line(int x)
{
	int y;

	if (x > 0)
	{
		for (y = 0 ; y < x ; y++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
