#include "main.h"
/**
 * print_chessboard - prints a 2d array
 * @a: 2d array to print
*/
void print_chessboard(char (*a)[8])
{
	int i = 0, j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		j = 0;
		_putchar(10);
		i++;
	}
}
