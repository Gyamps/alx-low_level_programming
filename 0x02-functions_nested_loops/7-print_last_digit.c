#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * Functions takes only 1 int argument
 *
 * @n: The integer number
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digi;
	last_digi = n % 10;
	if (last_digi < 0)
		n *= -1;
	_putchar('0' + (n % 10));
	return (n % 10);
}
