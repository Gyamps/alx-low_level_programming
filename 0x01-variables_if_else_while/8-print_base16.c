#include <stdio.h>

/**
 * main - Entry point of game
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int n = 48, i = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}

	while (i <= 102)
	{
		putchar(i);
		i++;
	}

	putchar('\n');
	return (0);
}
