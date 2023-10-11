#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - uses function to compare array elems
 * @array: array used
 * @size: size of array
 * @cmp: function used
 *
 * Return: index of first matching element, -1 (not found)
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array != NULL && cmp != NULL)
	{
		for (a = 0; a < size; a++)
			if (cmp(array[a]))
				return (a);
	}
	return (-1);
}
