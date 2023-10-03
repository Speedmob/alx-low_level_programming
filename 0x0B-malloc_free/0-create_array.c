#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - allocates enough space for an arr and declares/initializes it
 * @size: size of array
 * @c: characte for initialization
 *
 * Return: array of characters made.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);
	arr  = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}
