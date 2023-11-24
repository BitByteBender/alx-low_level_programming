#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian, 1 for little endian
 * or -1 if an error occurs
 */
int get_endianness(void)
{
	char *byte = (char *)malloc(sizeof(char));

	if (byte != NULL)
	{
	*byte = 1;

	if (*byte == 1)
	{
	free(byte);
	return (1);
	}
	else if (*byte == 0)
	free(byte);
	return (0);
	}
	else
		return (-1);
}
