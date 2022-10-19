#include "main.h"
/**
 * print_last_digit - prints the last digit
 * @x: number
 * Return: value
 */
int print_last_digit(int x)
{
	int d;
	int result;

	d = x % 10;
	result = d;

	_putchar(d);
	_putchar(result);
	return (result);
}
