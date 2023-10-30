#include "main.h"
/**
 * create_file - creates a file
 * @filename: file name
 * @text_content: content of file
 *
 * Return: 1 (Success), -1 (Fails)
*/
int create_file(const char *filename, char *text_content)
{
	int f, len;
	long int w;
	if (filename == NULL)
		return (-1);
	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (f == -1)
		return (-1);
	if (filename)
	{
		for (len = 0; text_content[len]; len++)
			;
		w = write(f, text_content, len);
		if (w == -1)
			return (-1);
	}
	return (close(f) == -1 ? -1 : 1);
}
