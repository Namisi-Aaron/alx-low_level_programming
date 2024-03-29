#include "3-op_functions.c"
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the
 * operation asked by the user
 * @s: the operator passed as argument to the program
 *
 * @Return: pointer to th function that corresponds to the operator s
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
