#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Function takes no argument
 *
 * Return: 0
 */

int main(void)
{
	int i, check1, check2;
	long int n1, n2, f_num1, f_num2, x, y;

	n1 = 1;
	n2 = 2;
	check1 = check2 = 1;
	printf("%ld, %ld", n1, n2);
	for (i = 2; i < 98; i++)
	{
		if (check1)
		{
			f_num1 = n1 + n2;
			printf(", %ld", f_num1);
			n1 = n2;
			n2 = f_num1;
		}
		else
		{
			if (check2)
			{
				x = n1 % 1000000000;
				y = n2 % 1000000000;
				n1 = n1 / 1000000000;
				n2 = n2 / 1000000000;
				check2 = 0;
			}
			f_num2 = x + y;
			f_num1 = n1 + n2 + (f_num2 / 1000000000);
			printf(", %ld", f_num1);
			printf("%ld", f_num2 % 1000000000);
			n1 = n2;
			x = y;
			n2 = f_num1;
			y = f_num2 % 1000000000;
		}
		if (((n1 + n2) < 0 && check1 == 1))
			check1 = 0;
	}
	printf("\n");
	return (0);
}
