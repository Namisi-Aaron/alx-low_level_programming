#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @n: elements in the array
 * @a: array
 * Return: void fuction (always 0)
 */
void reverse_array(int *a, int n)
{
	int x, y;

	for (x = 0 ; x < n ; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
