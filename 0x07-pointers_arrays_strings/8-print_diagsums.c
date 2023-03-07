#include <stdio.h>

/**
 * print_diagsums - print sums of diagonals in matrix
 * @a: matrix
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{

	int right_diagonal = 0;
	int left_diagonal = 0;
	int i, j;

	for (i = 0; i < size; i++)
	{
		j = (i * size) + i;
		right_diagonal += a[j];
	}

	for (i = 1; i <= size; i++)
	{
		j = (i * size) - i;
		left_diagonal += a[j];
	}

	printf("%d, %d\n", right_diagonal, left_diagonal);

}
