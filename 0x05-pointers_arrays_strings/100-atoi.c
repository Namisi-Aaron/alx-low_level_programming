#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	while (!('0' <= *s && *s <= '9') && *s != '\0')
	{
		if (*s == '-')
		{
			x *= -1;
		}
		if (*s == '+')
		{
			x *= +1;
		}
		s++;
	}
	while ('0' <= *s && *s <= '9' && *s != '\0')
	{
		y = (y * 10) + (*s - '0');
		s++;
	}
	return (y * x);
}
