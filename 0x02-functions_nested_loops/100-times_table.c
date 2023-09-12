#include "main.h"
/**
 * print_times_table - prints the nine times table, starting with zero
 * @n: times table boundaries
*/
void print_times_table(int n)
{
	int i, o;

	for (i = 0; i <= n && n < 16; i++)
	{
		for (o = 0; o <= n && n < 16; o++)
		{
			int m = i * o;

			if (o == 0)
			{
				_putchar('0');
			}
			else if (m < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else if (m > 99)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((m / 100) + '0');
				_putchar(((m / 10) % 10) + '0');
				_putchar((m % 10) + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar(10);
	}
}
