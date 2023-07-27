#include "main.h"
/**
 * _strncat - copies a string
 * @dest: string onto which src is appended
 * @src: string appended to dest
 * @n: bytes of src to use
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[i] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
