#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i, j;
	char str[50];

	i = 0;
	j = 0;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		str[j] = s[i];
		i--;
		j++;
	}
	str[j] = '\0';
	i = 0;
	while (str[i] != '\0')
	{
		s[i] = str[i];
		i++;
	}
}
