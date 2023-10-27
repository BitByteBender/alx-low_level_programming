#include <stdio.h>
/**
 * main - Entry point takes two args
 * @argc: intger argument count
 * @argv: argument value (array of chars pointers)
 * argument value set to null byte
 * prints argument count - 1
 * Return: argc (argument count)
 */
int main(int argc, char *argv[])
{
	*argv = '\0';
	printf("%d\n", (argc - 1));
	return (argc);
}
