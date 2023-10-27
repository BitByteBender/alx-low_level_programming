#include <stdio.h>
/**
 * main - Special function takes two args
 * @argc: Integer argument count
 * @argv: argument value (array of chars pointers)
 *
 * Iterates from index 0 to max count(argc)
 * prints argument value at every index
 * Return: Aways 0 (Success)
 */
int main(int argc, char **argv)
{
	unsigned short i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
