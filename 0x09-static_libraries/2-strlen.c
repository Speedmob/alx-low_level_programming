#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the array
 *
 * Return: retuns length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
