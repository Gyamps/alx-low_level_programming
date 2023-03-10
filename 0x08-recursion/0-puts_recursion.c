#include "main.h"

/**
 * _puts_recursion - print string with new line
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s != '\0')
		_puts_recursion(s);
	else
		_putchar('\n');
}
