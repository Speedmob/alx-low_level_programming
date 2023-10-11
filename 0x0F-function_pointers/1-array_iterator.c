#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - executes a function over a whole array
 * @array: array used
 * @size: size of array
 * @action: function to use
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
