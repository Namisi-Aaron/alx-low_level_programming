#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0 on success
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);
	for (num = 'a'; num <= 'f'; num++)
		putchar(num);
	putchar('\n');
	return (0);
}
