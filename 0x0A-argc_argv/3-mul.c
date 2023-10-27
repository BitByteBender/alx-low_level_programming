#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * If arguments less than 2 print Error
 * Else Iterates from index 1 then calculate till max count
 * Stored calculation inside Result
 * used atoi() to convert argument at current index to int
 *
 * Return:
 * 1 if argument count is less than 2
 * Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	unsigned short i;
	long int Result = 1;

	if (argc < 2)
	{
	puts("Error");
	return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			Result *= atol(argv[i]);
		}

	}
	printf("%ld\n", Result);
	return (0);
}
