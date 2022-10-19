#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @x: number
 * Return: value of last digit
 */
int print_last_digit(int x)
{
	int last = x % 10;

	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
