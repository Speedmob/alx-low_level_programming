#include "main.h"
/**
 * print_diagonal - prints a diagonal line
 * @n: length of diagonal line
*/
void print_diagonal(int n)
{
	int i, o;

	for (i = 0; i < n; i++)
	{
		for (o = 0; o < i; o++)
		{
			_putchar(32);
		}
		_putchar(92);
		_putchar(10);
	}
	if (n < 1)
	{
		_putchar(10);
	}
}
