#include <stdio.h>

/**
 * main - print Fibonacci terms not exceeding 4,000,000. Find and print
 * the sum of the even-valued terms
 *
 * Function takes no argument
 *
 * Return: 0
 */

int main(void)
{
	int n, x, f_num, sum;

	n = 1;
	x = 1;
	sum = 0;
	for (;;)
	{
		f_num = n + x;
		if ((f_num <= 4000000) && (f_num % 2 == 0))
		{
			sum += f_num;
		}
		else
			break;
		n = x;
		x = f_num;
	}
	printf("%d\n", sum);
	return (0);
}

