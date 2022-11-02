#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sum of 2 diagonals
 * of a square matrix
 * @a: matrix
 * @size: matrix size
 */
void print_diagsums(int *a, int size)
{
	int x, y, z;

	y = 0;
	z = 0;
	for (x = 0 ; x < size ; x++)
	{
		y += a[x];
		a += size;
	}
	a -= size;
	for (x = 0 ; x < size ; x++)
	{
		z += a[x];
		a -= size;
	}
	printf("%d, %d\n", y, z);
}
