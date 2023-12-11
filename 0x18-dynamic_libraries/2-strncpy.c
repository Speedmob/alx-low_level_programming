#include "main.h"
/**
 * _strncpy - concatenates two strings.
 * @dest: base string
 * @src: copied string
 * @n: n bytes to copy
 *
 * Return: a pointer to the resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;

	while (src[len] && len < n)
	{
		dest[len] = src[len];
		len++;
	}
	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
