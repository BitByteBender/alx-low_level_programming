#include <stdlib.h>
#include <string.h>

char *_strcpy(char *, char *);

/**
 * _strdup - Allocate a memory & return
 * a pointer to a copied string
 * @str: string to be duplicated
 *
 * used malloc() for memory allocation
 * Checks:
 * if string @str is NULL
 * if var Copied_str got memory allocation
 *
 * _strcpy() for copying @str to var Copied_str
 * after a successful memory allocation
 *
 * Return: Pointer to the newly allocated memory
 * var Copied_str(full string)
 */
char *_strdup(char *str)
{
	unsigned short Length = strlen(str);
	char *Copied_str;

	Copied_str = malloc(Length + 1);

	if (Copied_str == NULL || str == NULL)
	{
		return (NULL);
	}
	else
	{
		_strcpy(Copied_str, str);
		Copied_str[Length] = '\0';
	}

	return (Copied_str);
}
/**
 * _strcpy - copies a string from @src to @dest
 * @dest: a pointer to the destination of a string
 * @src: a pointer to the source of an array of chars
 * loop stars from 1st index which 0 to full length - 1
 * strlen() calculates string length
 * Return: pointer to @dest(full copied string)
 */
char *_strcpy(char *dest, char *src)
{
		unsigned short i, Length = (strlen(src) - 1);

		for (i = 0; i <= Length; i++)
		{
			dest[i] = src[i];
		}

	dest[strlen(src)] = '\0';
	return (dest);
}
