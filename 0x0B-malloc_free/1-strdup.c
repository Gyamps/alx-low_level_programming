#include <stdlib.h>
#include <stdio.h>
#include "main.h"

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
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *ch_ptr;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	ch_ptr = malloc(sizeof(char) * strlen(str));

	if (ch_ptr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(str); i++)
		ch_ptr[i] = str[i];

	return (ch_ptr);
}
