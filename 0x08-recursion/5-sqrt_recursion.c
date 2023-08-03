#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number whose square root is being sought
 * Return: the natural square root of n
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = pow(n, 0.5);
	if (n % sqrt == 0)
		return (sqrt);
	else
		return (-1);
}
