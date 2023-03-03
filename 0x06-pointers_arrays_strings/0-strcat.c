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
 * _strcat - concatenate two strings
 * @dest: string to be appended to
 * @src: string to append
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i, dest_len;

	dest_len = _strlen(dest);
	for (i = 0; i <= _strlen(src); i++)
		dest[dest_len + i] = src[i];
	return (dest);
}
