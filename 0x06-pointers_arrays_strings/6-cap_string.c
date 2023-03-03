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
 * cap_string - capitalizes all words of a string
 *
 * @s: the string
 *
 * Return: the string
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] == ' ')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
