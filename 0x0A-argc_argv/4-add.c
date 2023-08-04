#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument value
 * Return: 1 if no number is passed,
 * 1 if a non digit parameter is passed
 * 0 on success
 */
int main(int argc, char *argv[])
{
	int i = 1;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc > 1)
	{
		while (i < argc)
		{
			result += atoi(argv[i]);
			i++;
		}
		printf("%d\n", result);
	}
	return (0);
}
