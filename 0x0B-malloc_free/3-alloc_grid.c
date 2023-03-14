#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **arr_ptr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/*
	 * Reason for line below (the declarationa nd initialization
	 * is because, the 2D array is basically a pointer to another pointer
	 * - you get it so, great!-
	 * Now, we have to set apart enough memory for the size of an int
	 * pointer (8 bytes), and hence sizeof(int *). You barb? [for the rows]
	 * So now when you decide to set memory aside for the columns of the array,
	 * you'll just go with the normal flow.
	 * When you're freeing memory after, you start with the inner, then outer.
	 * Loop for inner, then just one line for outer.
	 */
	arr_ptr = malloc(height * sizeof(int *));

	if (arr_ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr_ptr[i] = malloc(width * sizeof(int));
		if (arr_ptr[i] == NULL)
		{
			for (i = 0; i < height; i++)
				free(arr_ptr[i]);
			free(arr_ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr_ptr[i][j] = 0;
	}

	return (arr_ptr);
}
