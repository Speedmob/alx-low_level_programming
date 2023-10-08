#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates mem for an arr of nmemb elems of size bytes each
 * @nmemb: n members to allocate
 * @size: size of each n member
 *
 * Return: Automatically promoted to any type pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	nmemb *= size;
	arr = malloc(nmemb);
	if (arr == NULL)
		return (NULL);
	while (nmemb-- != 0)
		arr[nmemb] = 0;
	return (arr);
}
