#include "main.h"
/**
 * _atoi - converts a string into an integer
 * @s: string to be converted
 * Return: resulting integer
 */
int _atoi(char *s)
{
	int x = 1;
	int y = 0;
	unsigned int z = 0;

	while (!(s[y] <= '9' && s[y] >= '0') && s[y] != '\0')
	{
		if (s[y] == '-')
			x *= -1;
		y++;
	}
	while (s[y] <= '9' && (s[y] >= '0' && s[y] != '\0'))
	{
		z = (z * 10) + (s[y] - '0');
		y++;
	}
	z *= x;
	return (z);
}
