#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a new space
 * @str: character pointer
 * Return: NULL if str == NULL, pointer on success
 * NULL if memory not sufficient
 */
char *_strdup(char *str)
{
	char *a;
	int x, y;

	x = 0;
	y = 0;

	if (str == NULL)
		return (NULL);
	while (str[x] != '\0')
		x++;

	a = malloc(sizeof(char) * (x + 1));

	if (a == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		a[y] = str[y];

	return (a);
}
