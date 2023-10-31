#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concat command line args into a single string
 * @ac: argument count
 * @av: argument value (array of chars pointers)
 * checks if arg count is 0 or arg val is NULL
 * loop 1: calc overall length
 * used malloc() to allocate memory
 * used strlen() to calc length of a string
 * checks if newly allocated string is NULL
 * loop 2: start from position 0 to arg count - 1
 * nested loop: goes from 0 to length of 1st string in the arg val - 1
 * used var Pos to check position
 * Return: pointer to concat string(full string) follow by new line
 */
char *argstostr(int ac, char **av)
{
	char *str;

	if (ac == 0 || av == NULL)
	{
	return (NULL);
	}
	else
	{
		unsigned short i = 0, j = 0, Length = 1, Pos = 0;

		while (i <= (ac - 1))
		{
		Length += strlen(av[i]) + 1;
		i++;
		}

		str = malloc(Length);

		if (str != NULL)
		{
		for (i = 0; i <= (ac - 1); i++)
		{
			for (j = 0; j <= (strlen(av[i]) - 1); j++)
			{
			str[Pos] = av[i][j];
			Pos++;
			if (j == strlen(av[i]) - 1)
				str[Pos] = '\n';
			}
		Pos++;
		}
		str[Length - 2] = '\n';
		}
	str[Length - 1] = '\0';
	}
	return (str);
}
