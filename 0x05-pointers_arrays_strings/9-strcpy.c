#include "main.h"
/**
 * _strcpy - copies a string
 * @dest: pointer to the destination
 * @src: pointer to the string input
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
