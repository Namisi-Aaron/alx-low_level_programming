#include "main.h"
/**
 * largest_number - returns the largest of 3 umbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	if (b > a && b > c)
	{
		largest = b;
	}
	if (c > a && c > b)
	{
		largest = c;
	}
	if (a == b && a == c)
	{
		largest = a;
	}
	if (a == b && a > c)
	{
		largest = b;
	}
	if (a == c && a > b)
	{
		largest = c;
	}
	if (b == c && b > a)
	{
		largest = c;
	}
	return (largest);
}
