#include "main.h"
/**
 * _prime_ - checks if n is a prime integer
 * @n: input integer
 * @i: dummy variable
 * Return: 1 if n is prime, 0 otherwise
 */
int _prime(int n, int i)
{
	if (n == 1)
		return (1);
	if (n % i == 0 && i < 0)
		return (0);
	return (_prime_(n, i - 1));
}
/**
 * is_prime_number - checks if n is prime
 * @n: input integer to be checked
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_(n, n - 1));
}
