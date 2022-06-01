#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print,
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t counterr, counterw;
	char *buf;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDWR);
	if (file == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		free(buf);
		return (0);
	}
	counterr = read(file, buf, letters);
	if (counterr == -1)
		return (0);
	counterw = write(STDOUT_FILENO, buf, counterr);
	if (counterw == -1 || counterr != counterw)
		return (0);
	free(buf);
	close(file);
	return (counterw);
}
