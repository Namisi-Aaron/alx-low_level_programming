#include "main.h"
/**
 * rev_string - reverses a string
 * @s: input
 * Return: reverse of string
 */
void rev_string(char *s)
{
	int x;
	int y = 0;
	char z = s[0];

	while (s[y] != '\0')
	{
		y++;
	}
	for (x = 0 ; x < y ; x++)
	{
		y--;
		z = s[x];
		s[x] = s[y];
		s[y] = z;
	}
}
