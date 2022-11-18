#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all parameters
 * @n: the number of integers to sum
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;

	va_list x;

	sum = 0;

	if (n == 0)
		return (0);

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		int a = va_arg(x, int);

		sum += a;
	}
	va_end(x);

	return (sum);
}
