#include <stdio.h>
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * If dereferenced argv is a null byte exit
 * Else Iterates from index 0 to max count(argc)
 * then prints argument value by index
 *
 * Return:
 * if null byte return 0
 * argc (argument count)
 */
int main(int argc, char *argv[])
{
	unsigned short i;

	if (**argv == '\0')
	{
		return (0);
	}
	else
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (argc);
}
