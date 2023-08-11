#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new space
 * @str: string to be copied to new destination
 * Return: NULL if str == NULL, pointer to new string on success
 * NULL if memory not sufficient
 */
char *_strdup(char *str)
{
	char *new_str;
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	new_str = malloc(sizeof(char) * (i + 1));
	if (new_str == NULL || str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
	{
		new_str[i] = str[i];
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
