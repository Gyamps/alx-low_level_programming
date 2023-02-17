#include <stdio.h>

/**
 * main - Entry point of prgram
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
	int i, j = 65;

	for (i = 97; i <= 122; i++)
		putchar(i);
	while (j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar(10);
	return (0);
}
