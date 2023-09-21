#include "main.h"
#include <stdio.h>
/**
 * print_buffer - print 10 bytes each line
 * @b: buffer
 * @size: buffer size
*/
void print_buffer(char *b, int size)
{
	int k = 0, m = 0, n = 0, p = 0, o = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (k < size)
	{
		printf("%08x: ", k);
		for (m = 1, n = k; m < 11; m++, n++)
		{
			if (n < size)
				printf("%02x", b[n]);
			else
				printf("  ");
			if ((m % 2) == 0)
				printf(" ");
		}
		for (p = 0; k < size && p < 10; p++, k++)
		{
			o = b[k];
			if (!(o > 31 && o < 133))
				printf(".");
			else
				printf("%c", b[k]);
		}
		printf("\n");
	}
}
