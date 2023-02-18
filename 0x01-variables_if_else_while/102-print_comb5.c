#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, j, k, l, outer_loops, inner_loops;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			for (k = 1; k <= 57; k++)
			{
				for (l = j + 1; l <= 57; l++)
				{
					outer_loops = (i * 10) + j;
					inner_loops = (k * 10) + l;
					if (outer_loops < inner_loops)
					{

						putchar(i);
						putchar(j);
						putchar(32);
						putchar(k);
						putchar(l);
					if (!((i == 57 && j == 57) && (k == 57 && l == 57)))
					{
						putchar(44);
						putchar(32);
					}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
