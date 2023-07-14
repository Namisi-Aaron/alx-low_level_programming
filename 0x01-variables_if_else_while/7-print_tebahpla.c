#include <stdio.h>
/**
 * main - prints the alphabet in reverse
 * Return: 0 on success
 */
int main(void)
{
	int alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);
	putchar('\n');
	return (0);
}
