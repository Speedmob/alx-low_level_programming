#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * strtow - splits a String into words.
 * @str: String to split
 *
 * Return: 2d array
*/
char **strtow(char *str)
{
	int c = 0, chck = 1, m = 0, a, o = 0, p = 0, k = 0, len;
	char **arr;

	if (str == NULL)
		return (NULL);
	for (m = 0; str[m]; m++)
	{
		if (str[m] != 32 && chck)
		{
			chck = 0;
			c++;
		}
		else if (str[m] == 32)
			chck = 1;
	}
	if (c == 0)
		return (NULL);
	arr = (char **)malloc(sizeof(char *) * (c + 1));
	for (a = 0; a < c; a++)
	{
		for (; str[o] == 32 && str[o]; o++)
			;
		for (k = o, len = 0; str[k] != 32 && str[k]; k++, len++)
			;
		arr[a] = malloc(sizeof(char) * (len + 1));
		if (arr[a] == NULL)
		{
			for (m = 0; m < a; m++)
				free(arr[m]);
			free(arr);
			return (NULL);
		}
		for (p = 0; str[o] != 32 && str[o]; o++, p++)
			arr[a][p] = str[o];
		arr[a][p] = '\0';
	}
	arr[a] = NULL;
	return (arr);
}
