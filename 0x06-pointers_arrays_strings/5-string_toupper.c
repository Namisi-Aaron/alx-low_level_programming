#include "main.h"
/**
 * string_toupper - converts lowercase to uppercase
 * @a: pointer
 * Return: character
 */
char *string_toupper(char *a)
{
	int x;

	x = 0;
	while (a[x] != '\0')
	{
		if (a[x] >= 'a' && a[x] <= 'z')
		{
			a[x] = a[x] - 32;
		}
		x++;
	}
	return (a);
}
