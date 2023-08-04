#include <stdlib.h>
#include <stdio.h>
/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 0 in success, 1 if arguments are not 2
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
