#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 * Return: lenght os string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
