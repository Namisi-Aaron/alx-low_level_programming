#include "main.h"
/**
 * _strncat - conc 2 strings with n byte
 * @dest: destination
 * @src: source
 * @n: characters to be copied
 * Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int x, y;

	x = 0;
	y = 0;
	while (dest[x] != '\0')
		x++;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
