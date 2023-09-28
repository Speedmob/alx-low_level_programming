#include "main.h"
/**
 * _pow_recursion - calc pow of num
 * @x: base
 * @y: pow
 *
 * Return: x raised by pow of y
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y)
		return (_pow_recursion(x, y - 1) * x);
	else
		return (1);
}
