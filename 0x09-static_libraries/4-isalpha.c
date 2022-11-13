#include "main.h"
/**
 * _isalpha - checks for alphabetical character
 * @x: character
 * Return: 1 if c is an alphabet, 0 otherwise
 */
int _isalpha(int x)
{
	if ((x >= 'A' && x <= 'Z') || (x >= 'a' && x <= 'z'))
		return (1);
	else
		return (0);
}
