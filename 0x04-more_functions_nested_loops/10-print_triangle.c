#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of triangle
*/
void print_triangle(int size)
{
	int i, o;

	for (i = 1; i < (size + 1); i++)
	{
		for (o = i; o < size; o++)
		{
			_putchar(32);
		}
		for (o = 0; o < i; o++)
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
