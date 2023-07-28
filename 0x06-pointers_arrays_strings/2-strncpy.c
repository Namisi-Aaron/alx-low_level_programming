#include "main.h"
/**
 * _strncpy - copied n bytes of strinc src to dest
 * @dest: destination string
 * @src: the string being copied to dest
 * @n: the number of characters to be copied
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		else if (src[i] == '\0' && i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}
	dest[i] = '\0';
	return (dest);
}
