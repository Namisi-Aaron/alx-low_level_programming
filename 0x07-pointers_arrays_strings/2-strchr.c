#include "main.h"
/**
 * _strchr - locates a character
 * @s: string
 * @c: character being searched
 * Return: char pointer if char is found
 * NULL if absent
 */
char *_strchr(char *s, char c)
{
	if  (s == NULL)
	{
		return (NULL);
	}
	for (; *s ; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);
}
