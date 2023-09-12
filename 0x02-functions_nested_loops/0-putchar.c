#include <stdio.h>
#include "main.h"
#include <unistd.h>
/**
 * main - prints _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", 9);
	return (0);
}
