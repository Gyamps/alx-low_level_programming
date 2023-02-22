#include <stdio.h>

/**
 * main - print the first 50 fibonacci numbers, starting iwth 1 and 2
 *
 * Function has no arguments
 *
 * Return: 0
 */

int main(void)
{
	int i;
	long int n, x, f_num;

	n = 1;
	x = 2;
	printf("%ld, %ld, ", n, x);
	for (i = 2; i <= 50; i++)
	{
		f_num = n + x;
		if (i == 50)
			printf("%ld\n", f_num);
		else
			printf("%ld, ", f_num);

		n = x;
		x = f_num;
	}
	return (0);
}
