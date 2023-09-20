#include "main.h"
#include "_abs.c"
/**
 * print_number - prints out an integer
 *@n: the number to be printed.
*/
void print_number(int n)
{
	int x = 10;
	unsigned int m, g;

	m = _abs(n);
	while ((m / x) >= 10)
	{
		x = x * 10;
	}
	if (n < 0)
	{
		_putchar('-');
		if (n > -10)
		{
			_putchar(-n + '0');
		} else
		{
			while (x != 0)
			{
				g = -n;
				g = (g / x) % 10;
				x = x / 10;
				_putchar(g + '0');
			}
		}
	} else if (n < 10)
	{
		_putchar(n + '0');
	} else
	{
		while (x != 0)
		{
			g = n;
			g = (g / x) % 10;
			x = x / 10;
			_putchar(g + '0');
		}
	}
}
