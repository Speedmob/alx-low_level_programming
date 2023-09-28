#include "main.h"
/**
 * num_iterator - iterates until sqrt is found
 * @a: num to find root of
 * @b: num for guessing
 *
 * Return: sqrt of num
*/
int num_iterator(int a, int b)
{
	if (a < 0 || a < b)
		return (-1);
	else if (b * b == a)
		return (b);
	else
		return (num_iterator(a, b + 1));
}
/**
 * _sqrt_recursion - calcs sqrt of num
 * @n: num to calc sqrt of
 *
 * Return: sqrt of num
*/
int _sqrt_recursion(int n)
{
	return (num_iterator(n, 1));
}
