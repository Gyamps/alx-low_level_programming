#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			putchar(i);
			putchar(j);
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
