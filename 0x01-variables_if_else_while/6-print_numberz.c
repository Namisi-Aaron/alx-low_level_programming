#include <stdio.h>
/**
 * main - prints single digit numbers of base 10 using putchar
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
