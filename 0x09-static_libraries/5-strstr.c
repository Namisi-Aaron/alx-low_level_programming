#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string with needle
 * @needle: substring in haystack
 * Return: pointer to beginning of needle,
 * NULL if needle is not found
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *x = haystack;
		char *y = needle;
		while (*x == *y && *y != '\0')
		{
			x++;
			y++;
		}
		if (*y == '\0')
			return ('\0');
	}
	return (needle);
}
