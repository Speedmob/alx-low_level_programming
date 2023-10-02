#include "main.h"
#include <stddef.h>
/**
 * _strchr - finds the first occurence of c and returns it
 * @s: string to search in
 * @c: character to search of
 *
 * Return: pointer to c or NULL
*/
char *_strchr(char *s, char c)
{
	while (s[0])
	{
		if (s[0] == c)
			return (s);
		s++;
	}
	return (!c ? s : NULL);
}
