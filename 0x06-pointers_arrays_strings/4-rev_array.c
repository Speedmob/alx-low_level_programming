#include "main.h"
/**
 * reverse_array - reverses an array of integers.
 * @a: integer array to be reversed
 * @n: size of array
*/
void reverse_array(int *a, int n)
{
	int m = 0;
	int s;

	n--;
	for (m = 0; m < ((n + 1) / 2); m++)
	{
		s = a[n - m];
		a[n - m] = a[m];
		a[m] = s;
	}
}
