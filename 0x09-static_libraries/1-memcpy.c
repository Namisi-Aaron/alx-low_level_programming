#include "main.h"
/**
 * _memcpy - copies n bytes
 * @dest: destination
 * @n: bytes copied
 * @src: source
 * Return: destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (x);
}
