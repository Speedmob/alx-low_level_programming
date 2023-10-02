#include "main.h"
/**
 * _isalpha - checks if a letter is alphabetic
 * @c: the character to be checked
 *
 * Return: 1 (alphabetic), 0 (otherwise), -1 (error)
*/
int _isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
	{
		return (1);
	}
	return (0);
}
