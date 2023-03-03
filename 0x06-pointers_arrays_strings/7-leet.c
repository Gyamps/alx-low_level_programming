#include"main.h"

int _strlen(char *s);
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
 * leet - encodes a string into 1337
 *
 * @s: the string
 *
 * Return: the string
 */
char *leet(char *s)
{
	char letters[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char char_replace[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (i = 0; i < _strlen(s); i++)
	{
		for (j = 0; j < _strlen(letters); j++)
		{
			if (s[i] == letters[j])
				s[i] = char_replace[j];
		}
	}
	return (s);
}
