#include <stdio.h>
#include "main.h"
/**
 * main - computes sum of num that are multiples of three or five
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	int m = 0;

	for (i = 0; i < 1024; i++)
	{
		if (((i % 5) == 0) || ((i % 3) == 0))
		{
			m = m + i;
		}
	}
	printf("%d\n", m);
	return (0);
}
