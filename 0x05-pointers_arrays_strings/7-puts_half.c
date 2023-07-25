#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string input
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, n, half;

	i = 0;
	n = 0;
	while (str[i] != '\0')
		i++;
	if (i % 2 == 0)
	{
		half = i / 2;
		while (n < half)
			n++;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
	else
	{
		half = (i - 1) / 2;
		while (n < half)
			n++;
		n++;
		while (str[n] != '\0')
		{
			_putchar(str[n]);
			n++;
		}
		_putchar('\n');
	}
}
