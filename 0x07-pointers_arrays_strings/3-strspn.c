#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the list of characters to match in s
 * Return: length of substring matching
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] == accept[i])
		i++;
	return (i);
}
