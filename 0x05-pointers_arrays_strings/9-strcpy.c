include "main.h"
/**
 * _strcpy - copies a string to the buffer pointed by dest
 * @dest: where to copy the string
 * @src: string to copy
 *
 * Return: a copy of the string
*/
char *_strcpy(char *dest, char *src)
{
	int i = 1;
	int m = 0;

	while (i)
	{
		dest[m] = src[m];
		m++;
		if (src[i])
		{
			i = 0;
		}
	}
	return (dest);
}
