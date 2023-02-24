#include "main.h"

/**
 * print_diagonal - draws a diagonal line in terminal
 *
 * @n: number of times character \ should be printed
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\\');
			_putchar('\n');
			if (i < (n - 1))
			{
				for (j = 0; j < i + 1; j++)
					_putchar(' ');
			}
		}
	}
}
