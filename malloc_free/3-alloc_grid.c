#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 * Return: NULL if error or pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);
	if (a == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(sizeof(int) * width);
		if (a[i] == NULL)
		{
			for (j = 0; j > i; j++)
			free(a[j]);
		free(a);
		return (NULL);
		}

	for (j = 0; j < width; j++)
		a[i][j] = 0;
	}
	return (a);
}
