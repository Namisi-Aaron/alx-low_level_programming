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
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c > a && c > b)
	{
		largest = c;
	}
	else if (a == b && a == c)
	{
		largest = a, b, c;
	}
	else if (a == b && a > c)
	{
		largest = a, b;
	}
	else if (a == c && a > b)
	{
		largest = a, c;
	}
	else if (b == c && b > a)
	{
		largest = b, c;
	}	
	return (largest);
}
