#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 to append to s1
 * Return: pointer to new allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *ptr;

	i = 0;
	j = 0;
	if (n >= strlen(s2))
	{
		ptr = malloc(strlen(s1) + strlen(s2) + 1);
		if (ptr == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (s2[j] != '\0')
		{
			ptr[i] = s2[j];
			j++;
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	else if (n < strlen(s2))
	{
		ptr = malloc(strlen(s1) + n + 1);
		if (ptr == NULL)
			return (NULL);
		while (s1[i] != '\0')
		{
			ptr[i] = s1[i];
			i++;
		}
		while (j < n)
		{
			ptr[i] = s2[j];
			i++;
			j++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
}
