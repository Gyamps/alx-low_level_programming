#include "main.h"

/**
 * print_line - draw straightline in terminal
 *
 * @n: number of times character _ should be printed
 *
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
