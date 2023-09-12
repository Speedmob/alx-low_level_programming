#include "main.h"
/**
 * times_table - prints the nine times table, starting with zero
*/
void times_table(void)
{
	int i, o;

	for (i = 0; i < 10; i++)
	{
		for (o = 0; o < 10; o++)
		{
			int m = i * o;

			if ((m + '0') < 58)
			{
				if (o != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(m + '0');
			}
			else
			{
				if (o != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}
		}
		_putchar(10);
	}
}
