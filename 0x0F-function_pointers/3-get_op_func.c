#include "3-calc.h"
/**
* get_op_func - searches for an int
* @s: point to the operator passed
* Return: an int
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

	i = 0;
	while (i < 5)
	{
		if (strcmp(ops[i].str, s) == 0)
		{
			return (ops[i].func);
		}
		i++;
	}

	return (NULL);
}
