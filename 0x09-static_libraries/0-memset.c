#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: byte
 * @n: number of bytes to fill
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
		*p++ = b;
	return (s);
}
