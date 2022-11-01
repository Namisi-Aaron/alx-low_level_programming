#include <stdio.h>

/**
 * main - using sizeof
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	printf("size of type 'char' on my comp: %lu bytes\n", sizeof(char));
	printf("size of type 'int' on my comp: %lu bytes\n", sizeof(int));
	printf("size of type 'float' on my comp: %lu bytes\n", sizeof(float));
	printf("size of type of my variable n on my comp: %lu bytes\n", sizeof(n));
	return (0);
}
