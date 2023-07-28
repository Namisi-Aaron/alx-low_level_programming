#include "main.h"
/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @arr: array to be checked for lowercase characters
 * Return: string in uppercase letters
 */
char *string_toupper(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		if (arr[i] >= 'a' && arr[i] <= 'z')
			arr[i] -= 32;
		i++;
	}
	return (arr);
}
