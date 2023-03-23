#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - main function (The OG func),
 * user provides give two integers and an operator and
 * the operation is performed via a function pointer.
 * prints sum, difference, product, dividend, or remainder
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int (*op_func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
