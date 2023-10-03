#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - copies a String into a newly allocated var in mem
 * @str: str to copy
 *
 * Return: pointer to copied str, NULL
*/
char *_strdup(char *str)
{
	int i = 0, m;
	char *str_2;

	if (str == NULL)
		return (NULL);
	for (; str[i]; i++)
		;
	str_2 = malloc(sizeof(char) * i + 1);
	if (str_2 == NULL)
		return (NULL);
	for (m = 0; m <= i; m++)
		str_2[m] = str[m];
	return (str_2);
}
