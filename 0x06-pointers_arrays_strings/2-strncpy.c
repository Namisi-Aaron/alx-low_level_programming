#include "main.h"
/**
 * _strncpy - copies n characters of string src to dest
 * @dest: destination file
 * @src: source file
 * @n: numbers of characters to be copied
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
	return (dest);
}
