#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string whose length is to be computed
 * Return: the length of string str
 */
int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

