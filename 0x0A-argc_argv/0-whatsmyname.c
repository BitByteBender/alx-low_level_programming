#include <stdio.h>
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * prints argument value
 * Return: argc (argument count)
 */
int main(int argc, char **argv)
{
	printf("%s\n", argv[0]);
	return (argc);
}
