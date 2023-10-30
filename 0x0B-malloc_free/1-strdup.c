#include <stdlib.h>
#include <string.h>

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
 * for loop for copying @str to var Copied_str by index
 * after a successful memory allocation
 *
 * Return: Pointer to the newly allocated memory
 * var Copied_str(full string)
 */
char *_strdup(char *str)
{
	char *Copied_str;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		unsigned short i, Length = (strlen(str));

		Copied_str = malloc(Length + 1);

		if (Copied_str == NULL)
		{
			return (NULL);
		}

	for (i = 0; i <= Length; i++)
	{
		Copied_str[i] = str[i];
	}
	Copied_str[Length + 1] = '\0';
	}

	return (Copied_str);
}
