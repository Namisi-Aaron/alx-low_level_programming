#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character
 * @s: string
 * @c: character being searched
 * Return: char pointer if char is found
 * NULL if absent
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0 ; s[x] >= '\0' ; x++)
		if (s[x] == c)
			return (s + x);
	return ('\0');
}
