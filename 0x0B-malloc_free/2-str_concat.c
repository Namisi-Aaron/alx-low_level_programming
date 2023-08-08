#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concateates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	new_str = malloc(sizeof(char) * (i + j + 1));
	if (new_str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
