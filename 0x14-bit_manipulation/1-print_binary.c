#include "main.h"
/**
 * print_binary - prints binary of an int
 * @n: int to convert
*/
void print_binary(unsigned long int n)
{
	int shift, c = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (shift = 63; shift >= 0; shift--)
	{
		if (n >> shift & 1)
		{
			_putchar('1');
			c = 1;
		}
		else if (c)
			_putchar('0');
	}
}
