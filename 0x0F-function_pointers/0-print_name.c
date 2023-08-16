#include "function_pointers.h"
/**
 * print_name - prints a name
 * @name: the name to be printed
 * @f: function pointer to the function that prints a name
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;
	(*f)(name);
}
