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
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: negative if s1 < s2, else positive. 0 if equal
 */
int _strcmp(char *s1, char *s2)
{
	int cmp_val, i;

	for (i = 0; i <= _strlen(s1); i++)
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			cmp_val = s1[i] - s2[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			cmp_val = s1[i] - s2[i];
			break;
		}
	}
	return (cmp_val);
}
