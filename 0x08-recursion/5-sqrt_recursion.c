#include "main.h"
/**
 * _recursive_ - finds the natural square root of number
 * @n: number whose square root is to be computed
 * @i: iterative integer
 * Return: square root of n
 */
int _recursive_(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (_recursive_(n, i + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose root is to be computed
 * Return: natural square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_recursive_(n, 0));
}
