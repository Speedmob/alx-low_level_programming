#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - string after first occurence of any accept bytes
 * @s: String to search on
 * @accept: characters to search of
 *
 * Return: String or NULL
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int j = 0;

	for (; s[0]; s++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[0] == accept[j])
			{
				return (s);
			}
		}
	}
	return (NULL);
}
