#include <stdio.h>
/**
 * main - prints the umber of arguments
 * passed to it
 * @argc: argument count
 * @argv: argument value
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
