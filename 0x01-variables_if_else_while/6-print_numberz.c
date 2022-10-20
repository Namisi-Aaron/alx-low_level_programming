#include <stdio.h>
/**
 * main - prints all single digit numbers
 * Return: Aways 0
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar((a % 10) + '0');
	}
	putchar('\n');
	return (0);
}
