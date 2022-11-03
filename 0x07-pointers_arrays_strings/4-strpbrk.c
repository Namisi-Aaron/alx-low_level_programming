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
	char x, *y;

	for (x = *s ; x != 0 ; s++)
	{
		for (y = accept ; *y != 0 ; y++)
		{
			if (x == *y)
			{
				return (s);
			}
		}
	}
	return ('\0');
}
