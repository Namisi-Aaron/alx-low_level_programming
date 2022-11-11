#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string two
 * @n: bytes of s2 to be concatenated to s1
 * Return: NULL if it fails
 * pointer to new space upon success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a, b;

	a = n;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (b = 0; s1[b]; b++)
		a++;
	x = malloc(sizeof(char) * (a + 1));

	if (x == NULL)
		return (NULL);
	a = 0;
	for (b = 0; s1[b]; b++)
		x[a++] = s1[b];
	for (b = 0; s2[b] && b < n; b++)
		x[a++] = s2[b];
	x[a] = '\0';

	return (x);
}
