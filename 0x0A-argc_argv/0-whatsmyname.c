#include <stdio.h>
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * argument count intentionally not used
 * prints argument value
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
