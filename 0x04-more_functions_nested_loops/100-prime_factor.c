#include <stdio.h>

/**
 * main - entry point of program
 *
 * Return: 0
 */

int main(void)
{
	long int n, factor;

	n = 612852475143;
	for (factor = 2; factor <= n; factor++)
	{
		if (n % factor == 0)
		{
			n /= factor;
			factor--;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
