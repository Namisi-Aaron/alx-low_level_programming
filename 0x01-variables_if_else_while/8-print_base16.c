#include <stdio.h>
/**
 * main - prints all numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int x;
	char y;

	for (x = 0 ; x <= 9 ; x++)
	{
		putchar(x + '0');
	}
	for (y = 'a' ; y <= 'f' ; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
