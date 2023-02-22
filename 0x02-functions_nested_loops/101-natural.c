#include "main.h"

/**
 * natural - prints the sum of all multiples of 3 or 5 below 1024
 *
 * Function takes 1 int argument
 *
 * @n: The integer argument
 *
 * Return: nothing
 */

void natural(int n)
{
	int sum, i;

	for (i = 1; i <= 1024; i++)
	{
		if (i % n == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
