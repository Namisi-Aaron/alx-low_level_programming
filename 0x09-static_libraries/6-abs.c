#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @x: integer number
 * Return: '-x' if negative, 'x' if positive
 */
int _abs(int x)
{
	if (x < 0)
		return (-x);
	else
		return (x);
}
