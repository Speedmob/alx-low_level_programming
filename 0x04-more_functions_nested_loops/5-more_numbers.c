#include "main.h"
/**
 * more_numbers - print numbers between zero and fourteen
*/
void more_numbers(void)
{
	int i, a;

	for (a = 0; a < 10; a++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
