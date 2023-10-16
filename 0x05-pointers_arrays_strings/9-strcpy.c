#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strcpy - Copies a string from src to dest
 * @dest: a pointer to the dest of a string array
 * @src: a pointer to src array(string) of characters
 * loop: starts from 1st index of the array to last index
 * strlen(): Calculates the length of a string
 * Return: pointer to dest(full string)
 */
char *_strcpy(char *dest, char *src)
{
	unsigned short i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}

	dest[strlen(src)] = '\0';
	return (dest);
}
