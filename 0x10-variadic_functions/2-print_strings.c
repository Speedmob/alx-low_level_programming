#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: char printed between strings
 * @n: num of strings passed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *a;
	va_list m;

	va_start(m, n);
	for (i = 1; i <= n; i++)
	{
		a = va_arg(m, char *);
		printf("%s", (a == NULL ? "(nil)" : a));
		if (separator != NULL && i != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(m);
}
