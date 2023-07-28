#include "main.h"
/**
 * reverse_array - reverses array pointed by a
 * @n: number of elements to reverse
 * @a: array pointer
 * Return: nothing
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
