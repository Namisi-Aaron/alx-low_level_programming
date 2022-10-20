#include <stdio.h>
/**
 * main - prints single digit numbers of base 10
 * Return: Always 0
 */
int main(void)
{
	char x;

	for (x = 0 ; x <= 9 ; x++)
	{
		printf("%d", x);
	}
	printf("\n");
	return (0);
}
