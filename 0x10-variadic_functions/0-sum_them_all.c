#include "variadic_functions.h"
/**
 * sum_them_all - sums all params
 * @n: number of params given
 *
 * Return: sum of params
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int i, sum = 0;

	va_start(m, n);
	for (i = 0; i < n; i++)
		sum += va_arg(m, int);
	va_end(m);
	return (sum);
}
