#include <time.h>
#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - program that generates a valid password
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
	int s = 0;
	char a = 0;

	srand(time(NULL));
	for (s = 0; s < 2646; s += a)
	{
		a = rand() % 128;
		_putchar(a);
	}
	_putchar(2772 - s);

	return (0);
}
