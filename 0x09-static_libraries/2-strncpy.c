#include "main.h"
/**
 * _strncpy - copys a string
 * @dest: destination
 * @src: source
 * @n: characters to be copied
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}
