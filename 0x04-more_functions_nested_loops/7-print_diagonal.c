#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @x: length of diagonal
 * Return: Always 0
 */
void print_diagonal(int x)
{
	int a;
	int b;

	if (x <= 0)
	{
		_putchar('\n');
	}
	for (a = 0 ; a < x ; a++)
	{
		for (b = 0 ; b < a ; b++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
