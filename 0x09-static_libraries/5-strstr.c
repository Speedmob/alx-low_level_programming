#include "main.h"
#include <stddef.h>
/**
 * _strstr - finds a substring in a string
 * @haystack: string to search in
 * @needle: string to search of
 *
 * Return: pointer to beginning of substring or NULL
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (haystack[0])
	{
		for (i = 0; needle[i] && (needle[i] == haystack[i]); i++)
			;
		if (!needle[i])
			return (haystack);
		haystack++;
	}
	return (NULL);
}
