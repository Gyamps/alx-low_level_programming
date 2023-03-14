#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *ch_ptr;
	unsigned int i;

	ch_ptr = malloc(sizeof(char) * size);

	for (i = 0; i < size; i++)
		ch_ptr[i] = c;
	return (ch_ptr);
}

