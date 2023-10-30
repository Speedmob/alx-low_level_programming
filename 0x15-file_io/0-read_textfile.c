#include "main.h"
/**
 * read_textfile - prints a text from a file
 * @filename: name of the file
 * @letters: num of letters
 *
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	int f, r, w;

	if (!filename)
		return (0);
	f = open(filename, O_RDWR);
	b = malloc(letters * sizeof(char));
	if (!b || f == -1)
	{
		if (b)
			free(b);
		return (0);
	}
	r = read(f, b, letters);
	if (r == -1)
	{
		free(b);
		return (0);
	}
	w = write(STDOUT_FILENO, b, r);
	if (w == -1)
	{
		free(b);
		return (0);
	}
	if (close(f) == -1)
	{
		free(b);
		return (0);
	}
	free(b);
	return (r);
}
