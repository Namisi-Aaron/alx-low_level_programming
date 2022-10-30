#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string to be capitalized
 * Return: String pointer
 */
char *cap_string(char *str)
{
	int v;

	while (str[v])
	{
		while (!(str[v] >= 'a' && str[v] <= 'z'))
		{
			v++;
		}
		if (str[v - 1] == ' ' ||
			str[v - 1] == '\t' ||
			str[v - 1] == '\n' ||
			str[v - 1] == ',' ||
			str[v - 1] == ';' ||
			str[v - 1] == '.' ||
			str[v - 1] == '!' ||
			str[v - 1] == '?' ||
			str[v - 1] == '"' ||
			str[v - 1] == '(' ||
			str[v - 1] == ')' ||
			str[v - 1] == '{' ||
			str[v - 1] == '}' ||
			v == 0)
		{
			str[v] = str[v] - 32;
		}
		v++;
	}
	return (str);
}
