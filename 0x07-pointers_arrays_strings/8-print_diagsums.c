#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints sums of diags of square matrix
 * @a: square matrix
 * @size: size of matrix
*/
void print_diagsums(int *a, int size)
{
	int x = 0, s1 = 0, s2 = 0;

	while (x < size)
	{
		s1 += a[size * x + x];
		s2 += a[size * (x + 1) - 1 - x];
		x++;
	}
	printf("%d, %d\n", s1, s2);
}
