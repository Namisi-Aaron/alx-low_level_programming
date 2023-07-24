#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: string to be printed
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *str != '\0'; str++)
		_putchar(*str);
	_putchar('\n');
}
