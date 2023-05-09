#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read and print a text file  to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- number of bytes read and printed out
 * and  0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t fp;
	ssize_t w;
	ssize_t t;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(fp, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(fp);
	return (w);
}

