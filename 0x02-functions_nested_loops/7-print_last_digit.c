#include <stdio.h>
/**
 * main - prints the last digit
 * @x: number
 * Return: Always 0
 */
int main(int x)
{
	int d;
	int result;

	d = x % 10;
	if (d < 0)
		d = d * -1;
	result = d;
	printf("%d%d", d, result);
	return (d);
}
