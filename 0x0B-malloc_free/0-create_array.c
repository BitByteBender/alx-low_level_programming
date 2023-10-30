#include <stdlib.h>
#include <string.h>
/**
 * create_array - a char pointer function that fills an array with @c
 * @size: an integer param
 * @c: a char param
 * used malloc() for memory allocation
 * size used to check if 0 return NULL
 * Else
 * declared a string and gave it a size using malloc()
 * then iterate over it till the @size
 * then fill the str var (array of chars) with @c at every index
 * starting from 0
 * Return:
 * if size is 0 return NULL otherwise, return @str
 */
char *create_array(unsigned int size, char c)
{
	char *str;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		unsigned short i;

		/*str = malloc(sizeof(*str) * (size + 1));*/
		str = malloc(sizeof(*str) * size);

		if (str == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= (size - 1); i++)
		{
			str[i] = c;
		}
	str[size] = '\0';
	}

	return (str);
}
