#include "main.h"
/**
 * _strlen_recursion - finds the length of a string
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;
	if (s != NULL && *s == '\0')
		return (0);
	else if (s[i + 1] == '\0')
		return (1);
	else
		return (1 + _strlen_recursion(s + 1));
}
