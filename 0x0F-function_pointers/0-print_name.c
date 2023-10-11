#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name using a function
 * @name: String to print
 * @f: Function to use
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
