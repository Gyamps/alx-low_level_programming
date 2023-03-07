#include "main.h"
#define NULL 0

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: pointer to that character in string
 */

/**
 * My naive code which is somehow wrong for one test
 * but works. So I'm confused.
 */

/**
 * char *_strchr(char *s, char c)
 * {
 *	int i;
 *
 *	for (i = 0; s[i] != '\0'; i++)
 *	{
 *		if (s[i] == c)
 *			return (&s[i]);
 *	}
 *	return (NULL);
 * }
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c) /* find match */
		i++;

	if (s[i] == c) /* if match, assign to address */
		return (&s[i]);
	else
		return (NULL);
}
