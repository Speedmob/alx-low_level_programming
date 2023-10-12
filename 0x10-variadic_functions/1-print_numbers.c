#include "variadic_functions.h"
/**
 * print_numbers - prints nums
 * @separator: char printed between nums
 * @n: num of nums passed
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list m;

	va_start(m, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(m, int));
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
