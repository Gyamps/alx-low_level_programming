#include "main.h"

/**
 * _strlen - length of string
 *
 * @s: the string
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; *s; i++)
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * string_toupper - change all lowercase letters to uppercase
 *
 * @s: the string
 *
 * Return: the string
 */
char *string_toupper(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
	}
	return (s);
}
