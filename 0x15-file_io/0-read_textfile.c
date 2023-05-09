#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letters: size letters
 * Return: the actual number of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fl, ltt, w;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	fl = open(filename, O_RDONLY);

	if (fl == -1)
	{
		free(txt);
		return (0);
	}

	ltt = read(fl, txt, letters);

	w = write(STDOUT_FILENO, txt, ltt);

	close(fl);

	return (letters);
}
