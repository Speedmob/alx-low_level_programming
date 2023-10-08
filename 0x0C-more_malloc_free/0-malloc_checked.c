#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: bytes to be allocated
 *
 * Return: Automatically promoted to any type pointer
*/
void *malloc_checked(unsigned int b)
{
	void *loc = malloc(b);

	if (loc)
		return (loc);
	exit(98);
}
