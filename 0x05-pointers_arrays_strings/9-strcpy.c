#include "main.h"
/**
 * _strcpy - copies a string to the buffer pointed by dest
 * @dest: where to copy the string
 * @src: string to copy
 *
 * Return: a copy of the string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
