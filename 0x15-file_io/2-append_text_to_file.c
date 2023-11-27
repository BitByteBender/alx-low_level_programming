#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * append_text_to_file - adds content to an existing file
 * @filename: name of file to append to
 * @text_content: content to append to the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	short file;

	if (filename != NULL)
	{
		file = open(filename, O_WRONLY | O_APPEND, 0664);

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
