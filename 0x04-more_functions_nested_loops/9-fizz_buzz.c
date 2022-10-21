#include <stdio.h>
/**
 * main - fizz buzz
 * Return: Always 0
 */
int main(void)
{
	int x;

	printf("1");
	for (x = 1 ; x <= 100 ; x++)
	{
		if (x % 3 == 0)
		{
			if (x % 5 == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Fizz");
			}
		}
		else if (x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf(" FizzBuzz");
			}
			else
			{
				printf(" Buzz");
			}
		}
		else
		{
			printf(" %d", x);
		}
	}
	printf("\n");
	return (0);
}
