#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **mem_array;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	mem_array = (int **) malloc(sizeof(int *) * height);

	if (mem_array == NULL)
		return (NULL);

	for (i = 0; i < height; i = i + 1)
	{
		mem_array[i] = (int *) malloc(sizeof(int) * width);
		if (mem_array[i] == NULL)
		{
			free(mem_array);
			for (j = 0; j <= i; j = j + 1)
				free(mem_array[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i = i + 1)
	{
		for (j = 0; j < width; j = j + 1)
		{
			mem_array[i][j] = 0;
		}
	}
	return (mem_array);
}
