#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	puts("Size of a char: %lu bytes(s)", sizeof(char));
	puts("Size of an int: %lu bytes(s)", sizeof(int));
	puts("Size of a long int: %lu bytes(s)", sizeof(long int));
	puts("Size of a long long int: %lu bytes(s)", sizeof(long long int));
	puts("Size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
