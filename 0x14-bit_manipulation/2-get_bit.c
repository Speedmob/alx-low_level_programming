#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: num
 * @index: index
 *
 * Return: value of a bit of a given index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	return ((signed int)index < 63 ? (signed int)((n >> index) & 1) : -1);
}
