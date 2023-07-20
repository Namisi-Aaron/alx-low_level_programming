#include "main.h"
/**
 * print_line - prints a straight line in the terminal
 * @n: the length of the line
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
