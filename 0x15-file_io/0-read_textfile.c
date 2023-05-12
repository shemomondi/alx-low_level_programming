#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, _print, _read, closed;
	char *buff;

	file = _print = _read = 0;
	buff = malloc(letters * sizeof(char));
	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	_read = read(file, buff, letters);

	if (_read == -1)
		return (0);

	_print = write(STDOUT_FILENO, buff, _read);
	if (_print == -1)
		return (0);

	closed = close(file);

	if (closed == -1)
		return (0);

	free(buff);
	return (_read);
}
