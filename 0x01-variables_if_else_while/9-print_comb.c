#include <stdio.h>
/**
 * main - prints all possible combinations
 * of single digit numbers
 * Return: Always 0
 */
int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
	{
		if (x != 9)
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(x + '0');
		}
	}
	return (0);
}
