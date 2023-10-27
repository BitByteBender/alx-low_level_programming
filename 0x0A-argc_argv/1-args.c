#include <stdio.h>
/**
 * main - Special function takes two args
 * @argc: Integer argument count
 * @argv: argument value (array of chars pointers)
 * argument value Intentionally casted to void to be unused
 * prints argument count - 1
 * Return: Aways 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)*argv;
	printf("%d\n", (argc - 1));
	return (0);
}
