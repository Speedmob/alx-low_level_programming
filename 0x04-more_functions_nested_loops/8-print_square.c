#include "main.h"
/**
 * print_square - prints a square
 * @size: size of square
*/
void print_square(int size)
{
	int i, o;

	for (i = 0; i < size; i++)
	{
		for (o = 0; o < size; o++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	if (size < 1)
	{
		_putchar(10);
	}
}
