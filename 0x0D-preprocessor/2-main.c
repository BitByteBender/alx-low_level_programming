#include <stdio.h>
#include <stdlib.h>

#ifndef fname
#define fname __FILE__
#else
#define fname
#endif /* fname */
/**
 * main - Entry point
 * used printf to print the name of the file
 * Return: Always EXIT (SUCCESS)
 */
int main(void)
{
	printf("%s\n", fname);
	return (EXIT_SUCCESS);
}
