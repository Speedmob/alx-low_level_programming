#include "main.h"
/**
 * _islower - checks if a letter is lowercase
 * @c: the character to be checked
 *
 * Return: 1 (lowercase), 0 (otherwise), -1 (error)
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	return (0);
}
