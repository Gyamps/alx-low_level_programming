#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function to select correct operation function
 * @s: operation (+, *, -, /, %)
 * Return: pointer to correct operation function
 */

int (*get_op_func(char *s))(int a, int b)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
