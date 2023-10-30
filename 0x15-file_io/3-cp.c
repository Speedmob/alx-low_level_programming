#include "main.h"
/**
 * main - copy a file to a file
 * @argc: num of args
 * @argv: args
 *
 * Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int f, f_m, len, c_f, c_m;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f_m = open(argv[1], O_RDONLY);
	if (f_m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	while ((len = read(f_m, buffer, BUFSIZ)) > 0)
	{
		if ((write(f, buffer, len) != len) || f == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f);
			close(f_m);
			exit(99);
		}
	}
	if (len == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	c_f = close(f);
	c_m = close(f_m);
	if (c_f == -1 || c_m == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", c_f == -1 ? f : f_m);
		exit(100);
	}
	return (0);
}
