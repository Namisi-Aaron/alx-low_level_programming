#include "main.h"
/**
 * print_square - prints a square
 * @size: square size
 * Return: Always 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;
		int y;

		for (x = 0 ; x < size ; x++)
		{
			for (y = 0 ; y < size ; y++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
