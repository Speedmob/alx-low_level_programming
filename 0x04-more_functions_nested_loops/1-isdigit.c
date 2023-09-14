#include "main.h"
/**
 * _isdigit - Checks if c is a digit
 * @c: variable to be tested
 *
 * Return: 1 (Digit), 0 (Otherwise)
*/
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}
