#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: char printed between strings
 * @n: num of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list m;

	va_start(m, n);
	for (i = 1; i <= n; i++)
	{
		printf("%s", va_arg(m, char *));
		if (i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
