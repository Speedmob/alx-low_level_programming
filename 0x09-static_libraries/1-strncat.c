#include "main.h"
/**
 * _strncat - concatenates two strings.
 * @dest: base string
 * @src: added string
 * @n: n bytes to concatenate
 *
 * Return: a pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, len_2 = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[len_2] && len_2 < n)
	{
		dest[len + len_2] = src[len_2];
		len_2++;
	}
	dest[len + len_2] = '\0';
	return (dest);
}
