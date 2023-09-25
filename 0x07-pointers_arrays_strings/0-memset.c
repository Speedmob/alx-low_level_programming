#include "main.h"
/**
 * _memset - sets n bytes of a string to a char
 * @s: The string
 * @b: The char
 * @n: The n bytes
 *
 * Return: pointer to the memory s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

