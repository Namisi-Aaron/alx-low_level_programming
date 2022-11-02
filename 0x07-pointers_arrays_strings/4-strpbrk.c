#include "main.h"
/**
 * _strpbrk - locates the first occurrence in
 * the string s of any
 * of the bytes in the string accept
 *
 * @s: string searched through
 * @accept: string containing bytes searched for
 *
 * Return: NULL if not matched
 * pointer to string if matched
 */
char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0, accept[a] ; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return ('\0');
}

