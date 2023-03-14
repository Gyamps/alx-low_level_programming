#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
		len++, s++;

	return (len);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *arg_ptr;
	int str_lens = 0, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);


	for (i = 0; i < ac; i++)
	{
		str_lens += _strlen(av[i]); /* total length of strng arguments */
	}

	str_lens += (ac + 1); /*padding for newlines and null terminator */


	arg_ptr = malloc(sizeof(char) * str_lens);

	if (arg_ptr == NULL)
	{
		return (NULL);
	}


	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			arg_ptr[k++] = av[i][j];
		}
		arg_ptr[k++] = '\n';
	}

	return (arg_ptr);
}
