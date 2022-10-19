#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98
 * @n: starting number
 */
void print_to_98(int n)
{
	for (n = n ; n <= 98 ; n++)
	{
		printf("%d, ", n);
	}
	for (n = n ; n >= 98 ; n--)
	{
		printf("%d, ", n);
	}
}

