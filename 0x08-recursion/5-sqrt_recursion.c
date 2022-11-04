#include "main.h"
/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: number
 *
 * Return: natural sqrt if valid,
 * -1 if sqrt doesn't exist
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = n ^ (1 / 2);
	if (n % sqrt == 0)
		return (sqrt);
}
