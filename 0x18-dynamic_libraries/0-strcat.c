#include "main.h"
/**
 * _strcat - concatenates two strings.
 * @dest: base string
 * @src: added string
 *
 * Return: a pointer to the resulting string dest
*/
char *_strcat(char *dest, char *src)
{
	int len = 0, len_2 = 0;

	while (dest[len])
	{
		len++;
	}
	while (src[len_2])
	{
		dest[len + len_2] = src[len_2];
		len_2++;
	}
	dest[len + len_2] = '\0';
	return (dest);
}
