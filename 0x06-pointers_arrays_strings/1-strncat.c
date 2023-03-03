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
 * _strncat - concat two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, dest_len, src_len;

	dest_len = _strlen(dest);
	src_len = _strlen(src);
	if (n >= src_len)
	{
		for (i = 0; i < src_len; i++)
			dest[dest_len + i] = src[i];
		dest[_strlen(dest) + 1] = '\0';
	}
	else if (n < src_len)
	{
		for (i = 0; i < n; i++)
			dest[dest_len + i] = src[i];
		dest[_strlen(dest) + 1] = '\0';
	}
	return (dest);
}
