#include "main.h"
/**
 * _strpbrk - searches a string for any occurrence of a set of bytes
 * @s: character searched for
 * @accept: string searched through
 * Return: NULL if not matched,
 * pointer to string if matched
 */
char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
				return (s);
		}
		s++;
	}
	return ('\0');
}
