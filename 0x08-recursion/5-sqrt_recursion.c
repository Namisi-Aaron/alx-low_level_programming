#include "main.h"
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is being sought
 * Return: the natural square root of n
 */
int _pow_recursion(int x, int y);

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = _pow_recursion(n, 0.5);
	if (n % sqrt == 0)
		return (sqrt);
	else
		return (-1);
}
/**
 * _pow_recursion - returns the result of x raised to power y
 * @x: base
 * @y: power
 * Return: x power y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, (y - 1)));
}
