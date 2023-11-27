#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

size_t RDWR(size_t, char *, size_t, ssize_t *);
/**
 * read_textfile - reads a text file and writes it to STDOUT
 * @filename: name of file to be read
 * @letters: number of chars to be read and written
 * Return: number of chars on a successful read and write
 * Or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *TBuffer;
	size_t file;
	ssize_t MaxBytes = 0;

	if (filename != NULL)
	{
	file = open(filename, O_RDONLY);

	TBuffer = (char *)malloc(sizeof(char) * letters);
		if (TBuffer == NULL)
			return (0);

		if (!(RDWR(file, TBuffer, letters, &MaxBytes)))
			return (0);
	}
	else
	{
	write(STDOUT_FILENO, "No: such file\n", sizeof("No: such file\n"));
	return (0);
	}

	free(TBuffer);
	close(file);

	return (MaxBytes);
}
/**
 * RDWR - reads data from file and writes it to STDOUT
 * @file: file to read from
 * @TBuffer: array to store read data
 * @letters: number of chars to read and write
 * @MaxBytes: counts total written bytes
 * Return: 0 on failure or 1 on success
 */
size_t RDWR(size_t file, char *TBuffer, size_t letters, ssize_t *MaxBytes)
{
	ssize_t rdBytes = 0, wrBytes = 0;

	while (letters > 0)
	{
	rdBytes = read(file, TBuffer, letters);
	if (rdBytes <= 0)
		break;

	wrBytes = write(STDOUT_FILENO, TBuffer, rdBytes);

	if (wrBytes == -1)
	{
	write(STDOUT_FILENO, "Error\n", sizeof("Error\n"));
	free(TBuffer);
	close(file);
	return (0);
	}

	*MaxBytes += wrBytes;
	letters -= wrBytes;
	}

	return (1);
}
