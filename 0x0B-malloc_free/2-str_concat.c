#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concateates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new conc string
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = 0;
	j = 0;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	conc = malloc(sizeof(char) * (i + j + 1));
	if (conc == NULL)
		return (NULL);

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		conc[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		conc[i] = s2[j];
		i++;
		j++;
	}
	conc[i] = '\0';
	return (conc);
}
