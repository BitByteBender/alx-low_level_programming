#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#define BUFFER 1024

inline void closeFiles(short, short);
void _copy_from_to(const char *, const char*);

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of argument value
 * Return:
 * if argument count exceeds 3 exit 97
 * Or 0 on success
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: %s %s %s\n", argv[0], argv[1], argv[2]);
	exit(97);
	}

	_copy_from_to(argv[1], argv[2]);

	return (0);
}
/**
 * _copy_from_to - copies content from source file to destination file
 * @fnameFrom: name of source file
 * @fnameTo: name of destination file
 * checks:
 * if can't read from source file exit 98
 * if can't write or create destination file exit 99
 */
void _copy_from_to(const char *fnameFrom, const char *fnameTo)
{
	char *ErrMsg, buffer[BUFFER];
	short file_From, file_To;
	ssize_t wrBytes, rdBytes;

	file_From = open(fnameFrom, O_RDONLY, 0600);
	if (file_From == -1)
	{
		ErrMsg = "Error: Can't read from file";
		dprintf(STDERR_FILENO, "%s %s\n", ErrMsg, fnameFrom);
		exit(98);
	}

	file_To = open(fnameTo, O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	if (file_To == -1)
	{
		ErrMsg = "Error: Can't write to ";
		dprintf(STDERR_FILENO, "%s %s\n", ErrMsg, fnameTo);
		closeFiles(file_From, file_To);
		exit(99);
	}

	rdBytes = read(file_From, buffer, sizeof(buffer));
	while (rdBytes > 0)
	{
		wrBytes = write(file_To, buffer, rdBytes);

		if (wrBytes != rdBytes)
		{
		ErrMsg = "Error: Can't wire to ";
		dprintf(STDERR_FILENO, "%s %s\n", ErrMsg, fnameTo);
		closeFiles(file_From, file_To);
		exit(99);
		}
		rdBytes = read(file_From, buffer, sizeof(buffer));
	}

	if (fchmod(file_To, 0664) == -1)
	{
	ErrMsg = "Error: Can't change file permissions";
	dprintf(STDERR_FILENO, "%s %s\n", ErrMsg, fnameTo);
	closeFiles(file_From, file_To);
	exit(99);
	}

	closeFiles(file_From, file_To);
}
/**
 * closeFiles - closes file descriptors
 * @file_From: source file
 * @file_To: destination file
 */
inline void closeFiles(short file_From, short file_To)
{
	char *ErrMsg = "Error: Can't close fd ";
	short closeFrom = close(file_From), closeTo = close(file_To);

	if (closeFrom == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", ErrMsg, file_From);
		exit(100);
	}

	if (closeTo == -1)
	{
		dprintf(STDERR_FILENO, "%s %d\n", ErrMsg, file_To);
		exit(100);
	}
}
