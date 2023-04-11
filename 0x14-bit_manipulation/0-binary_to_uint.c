#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _pow_recursion - calculate exponenet
 * @x: base
 * @y: exponenet
 *
 * Return: x exponent y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (x == 0)
		return (0);

	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i, len_b, digit;
	unsigned int sum = 0, j = 0;

	len_b = _strlen(b) - 1;

	if (b == NULL)
		return (0);

	for (i = len_b; i >= 0; i++)
	{
		digit = b[i] - '0';
		if (digit != 0 && digit != 1)
			return (0);

		sum += digit * _pow_recursion(2, j);
		j++;
	}

	return (sum);
}
