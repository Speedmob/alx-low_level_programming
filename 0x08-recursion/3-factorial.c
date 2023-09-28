#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to calculate
 *
 * Return: factorial of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n)
		return (factorial(n - 1) * n);
	else
		return (1);
}
