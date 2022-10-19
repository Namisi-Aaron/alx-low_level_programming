#include <stdio.h>
/**
 * main - prints the alphabet in lowercase
 * Return: Always 0
 */
int main(void)
{
	int alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
