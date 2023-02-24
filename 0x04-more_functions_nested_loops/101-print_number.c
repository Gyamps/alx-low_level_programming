#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: Integer to print
 *
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int i, j, count;

	if (n < 0)
	{
		_putchar('-');
		i = n * -1;
	}
	else
		i = n;
	j = i;
	count = 1;
	while (j > 9)
	{
		d /= 10;
		count *= 10;
	}
	while (count >= 1)
	{
		_putchar(((i / count) % 10) + 48);
		count /= 10;
	}
}
