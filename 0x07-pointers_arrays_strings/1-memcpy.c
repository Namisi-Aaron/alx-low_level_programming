#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory to which characters are being copied
 * @src: memory from which characters are being copied
 * @n: number of bytes to copy from s
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
