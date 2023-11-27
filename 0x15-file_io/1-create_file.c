#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a file with a content
 * @filename: name of file to be created
 * @text_content: content to be stored in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	short file;

	if (filename != NULL)
	{
		file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (file == -1)
		return (-1);

	if (text_content != NULL)
		write(file, text_content, strlen(text_content));

	close(file);
	return (1);
	}
	else
		return (-1);
}
