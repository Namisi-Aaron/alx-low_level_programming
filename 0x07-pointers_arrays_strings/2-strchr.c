#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer to the charaster to be traversed
 * @c: character being searched for
 * Return: pointer to the first instance of c on success
 */
char *_strchr(char *s, char c)
{
	int i;
	char *ptr;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			ptr = &s[i];
			return (ptr);
		}
		i++;
	}
	return (NULL);
}
