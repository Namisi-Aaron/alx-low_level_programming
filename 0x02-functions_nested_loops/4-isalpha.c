#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 * @c: character
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') && (c >= 'A' and c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
