#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers to the function
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	i = 0;
	if (separator == NULL)
		separator = "";
	if (n == 0)
	{
		putchar('\n');
		return;
	}
	va_start(args, n);
	printf("%d", va_arg(args, int));
	i++;
	for (; i < n; i++)
		printf("%s%d", separator, va_arg(args, int));
	putchar('\n');
	va_end(args);
}
