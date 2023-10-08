#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers.
 * @min: Starting Int
 * @max: Max Int
 *
 * Return: Arr of type Int
*/
int *array_range(int min, int max)
{
	int *arr;
	int dif = 1;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(int));
	if (arr == NULL)
		return (NULL);
	dif += max - min;
	while (dif--)
		arr[dif] = max--;
	return (arr);
}
