#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - gets user inputs/commands and perform calcs
 * @argc: number of command line args(argument count)
 * @argv: array of command line args(argument value)
 * Return:
 * if argc is less than 4 exit 98
 * if invalid operator exit 99
 * if division or mod by 0 exit 100
 * if success return the calculation
 */
int main(int argc, char **argv)
{
	Operation_func op_func = NULL;
	int num1 = 0, num2 = 0, Outcome = 0;
	char *op;

	if (argc < 4)
	{
	puts("Error");
	exit(98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	op_func = get_op_func(op);

	if (op_func == NULL)
	{
	puts("Error");
	exit(99);
	}

	if ((*op == '/' || *op == '%') && num2 == 0)
	{
	puts("Error");
	exit(100);
	}

	Outcome = op_func(num1, num2);
	printf("%d\n", Outcome);
	return (0);
}
