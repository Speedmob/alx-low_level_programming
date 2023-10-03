#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - declares/initiates a 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: initiated 2d array, NULL
*/
int **alloc_grid(int width, int height)
{
	int a, m;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(sizeof(int) * width);
		if (arr[a] == NULL)
		{
			for (m = 0; m < a; m++)
				free(arr[m]);
			free(arr);
			return (NULL);
		}
		for (m = 0; m < width; m++)
			arr[a][m] = 0;
	}
	return (arr);
}
