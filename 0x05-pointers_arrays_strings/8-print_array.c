#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements to be printed
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == 0)
			printf("%d", a[i]);
		else
			printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
