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
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ch_ptr;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	ch_ptr = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)));
	if (ch_ptr == NULL)
		return (NULL);

	for (i = 0; i < _strlen(s1); i++)
		ch_ptr[i] = s1[i];

	for (j = 0; j < _strlen(s2); j++)
		ch_ptr[_strlen(s1) + j] = s2[j];
	ch_ptr[i + j] = '\0';

	return (ch_ptr);
}
