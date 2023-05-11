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
	int o_f;

	ssize_t _read, _write;

	char *buff;
	
	if (filename)
	{
	return (0);
	}
	o_f =open(filename, O_RDONLY);
	if (o_f == -1)
		return (0);
	
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	_read = read(o_f, buff, letters);
	if (_read == -1)
	{
		free(buff);
		close(o_f);
		return (0);
	}

	_write = write(STDOUT_FILENO, buff, _read);
	if (_write == -1)
	{
		free(buff);
		close(o_f);
		return (0);
	}
	close(o_f);
	return (_read);
}
