#include "main.h"
/**
 * _strspn - gets length of prefix substring
 * @s: string1
 * @accept: string2
 * Return: unsigned integer
 */
unsigned int _strspn(char *s, char *accept)
{
	int x, y;

	x = 0;
	y = 0;

	for (; s[x] ; x++)
	{
		for (y = 0 ; accept[y] ; y++)
		{
			if (s[x] == accept[y])
				break;
		}
		if (s[x] != accept[y])
			break;
	}
	return (x);
}
