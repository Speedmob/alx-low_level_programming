#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: difference between two unmatched characters
*/
int _strcmp(char *s1, char *s2)
{
	int len = 0;

	while (s1[len] == s2[len] && s1[len])
	{
		len++;
	}
	return (s1[len] - s2[len]);
}
