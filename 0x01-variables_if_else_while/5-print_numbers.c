#include <stdio.h>
/**
 * main - prints all single digit numbers from 0
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		printf("%d", num);
	putchar('\n');
	return (0);
}
