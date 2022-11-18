#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *x = va_arg(args, char *);

		if (separator == NULL)
			printf("%s", x);

		if (x == NULL)
			printf("(nil)");

		if (i == 0)
			printf("%s", x);
		else
			printf("%s%s", separator, x);
	}
	printf("\n");

	va_end(args);
}
