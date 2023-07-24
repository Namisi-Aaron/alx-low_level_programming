#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string input
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, half, counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	len = counter;
	if (len % 2 != 0)
		len -= 1;
	else
		len = len;
	half = len / 2;
	while (i < half)
		i++;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
