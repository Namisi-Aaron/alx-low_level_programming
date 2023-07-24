#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	i--;
	s--;
	while (i != -1)
	{
		_putchar(*s);
		i--;
		s--;
	}
	_putchar('\n');
}
