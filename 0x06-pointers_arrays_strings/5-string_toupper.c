#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 * @a: string to be changed
 *
 * Return: changed string
*/
char *string_toupper(char *a)
{
	int len = 0;
	int diff;

	while (a[len])
	{
		if (a[len] > 96 && a[len] < 123)
		{
			diff = a[len] - 'a';
			a[len] = diff + 'A';
		}
		len++;
	}
	return (a);
}
