#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string input
 * Return: nothing
 */
void puts_half(char *str)
{
	int i, len, half;

	i = 0;
	len = _strlen(str);
	if (len % 2 != 0)
		len -= 1;
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
