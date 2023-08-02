#include "main.h"
/**
 * factorial - finde the facorial of a number
 * @n: the number whose factorial is to be found
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n == 1 || n == 0)
		return (1);
	else if (n < 1)
		return (-1);
	else
		return(n * factorial(n - 1));
}
