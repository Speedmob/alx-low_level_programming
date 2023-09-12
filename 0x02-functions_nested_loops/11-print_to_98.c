#include "main.h"
#include "6-abs.c"
#include <stdio.h>
/**
 * print_to_98 - prints from n to ninty-eight
 * @n: starter number
*/
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else
	{
		for (i = n; i < 98; i++)
		{
		printf("%d, ", i);
		}
	}
	printf("98\n");
}
