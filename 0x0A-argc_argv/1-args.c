#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments passed to program
 * @argc: argument counter
 * @argv: pointer to array of arguments
 * Return: 0 on success
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
