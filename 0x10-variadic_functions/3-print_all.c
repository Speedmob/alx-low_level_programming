#include "variadic_functions.h"
/**
 * print_all - a func that prints all
 * @format: format of what to print
*/
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list m;
	char *a, *r = "";

	va_start(m, format);
	if (format != NULL)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", r, va_arg(m, int));
					r = ", ";
					break;
				case 'i':
					printf("%s%d", r, va_arg(m, int));
					r = ", ";
					break;
				case 'f':
					printf("%s%f", r, va_arg(m, double));
					r = ", ";
					break;
				case 's':
					a = va_arg(m, char *);
					printf("%s%s", r, a == NULL ? "(nil)" : a);
					r = ", ";
					break;
				default:
					i++;
					continue;
			}
			i++;
		}
	}
	va_end(m);
	printf("\n");
}
