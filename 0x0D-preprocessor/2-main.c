#include <stdio.h>

/**
 * main - print name of file program was
 * compiled from
 * Return: 0
 */

int main(void)
{
	printf("%s", __FILE__);
	return (0);
}
