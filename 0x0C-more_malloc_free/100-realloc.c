#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: prev allocated memory block
 * @old_size: size of ptr
 * @new_size: size for new memory block
 *
 * Return: pointer that promotes to any type
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *arr;

	if (ptr == NULL)
		return (malloc(new_size));
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr)
		return (free(ptr), NULL);
	arr = malloc(new_size);
	if (arr == NULL)
		return (NULL);
	if (new_size < old_size)
		old_size = new_size;
	while (old_size--)
		arr[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return (arr);
}
