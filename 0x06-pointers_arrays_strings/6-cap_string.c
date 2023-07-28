#include "main.h"
/**
 * cap_string - capitalizes words of a string
 * @str: string to be capitalized
 * Return: pointer to the capitalized string
 */
char *cap_string(char *str)
{
	int i;

	while (str[v])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			i++;
		}
		if (str[i - 1] == ' ' ||
			str[i - 1] == '\t' ||
			str[i - 1] == '\n' ||
			str[i - 1] == ',' ||
			str[i - 1] == ';' ||
			str[i - 1] == '.' ||
			str[i - 1] == '!' ||
			str[i - 1] == '?' ||
			str[i - 1] == '"' ||
			str[i - 1] == '(' ||
			str[i - 1] == ')' ||
			str[i - 1] == '{' ||
			str[i - 1] == '}' ||
			i == 0)
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}
