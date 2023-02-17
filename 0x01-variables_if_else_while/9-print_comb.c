#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(44);
			putchar(32);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
