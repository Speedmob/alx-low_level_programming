#include "main.h"
/**
 * _isupper - Checks if the letter is uppercase
 * @c: variable to be tested
 *
 * Return: 1 (Uppercase), 0 (Otherwise)
*/
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	return (0);
}
