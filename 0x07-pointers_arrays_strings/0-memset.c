#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area pointed to
 * @b: constant byte to be filled into s
 * @n: the number of bytes to fill with b
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
