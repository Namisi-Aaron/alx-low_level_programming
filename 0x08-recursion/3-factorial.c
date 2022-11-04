#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number
 *
 * Return: 0 when n < 0, -1 to indicate an error
 *  1 when n == 0
 *  factorial when n is valid/ > 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
